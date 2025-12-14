/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112509
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                {
                    var_19 *= ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0] [i_1])) >> (((((((/* implicit */int) var_18)) | (var_4))) + (1776232472)))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) min((8916759785445289680LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) min((4015431179504597329LL), (((/* implicit */long long int) var_7))))))))));
                                var_21 = ((/* implicit */long long int) var_12);
                                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_2] [2] [i_4] [i_2 + 4])) + (((/* implicit */int) arr_6 [(signed char)8] [i_1] [i_4] [i_2 - 1]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3]))) & (((((/* implicit */_Bool) var_17)) ? (var_3) : (((/* implicit */unsigned long long int) var_17)))))))))));
                                arr_10 [i_0] [(_Bool)1] [i_2] [i_3] [i_0] = ((/* implicit */short) ((((-8916759785445289674LL) + (((/* implicit */long long int) 3877458749U)))) + (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2] [i_2] [i_2] [i_2 + 2] [i_2 + 4] [i_2] [i_2]))) - (arr_1 [i_0]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-75))))) : (min((13912309077350889153ULL), (((/* implicit */unsigned long long int) (short)11798)))))), (((/* implicit */unsigned long long int) var_15))));
        var_24 *= ((/* implicit */unsigned char) min((arr_1 [8LL]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [(_Bool)1] [i_0])) / (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))) && (((/* implicit */_Bool) min((13912309077350889153ULL), (((/* implicit */unsigned long long int) 2176117105592207456LL))))))))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 16; i_5 += 2) 
        {
            for (int i_6 = 4; i_6 < 14; i_6 += 3) 
            {
                {
                    arr_17 [i_0] [i_0] [i_6 - 2] = ((/* implicit */unsigned short) (~(min((((/* implicit */unsigned long long int) arr_9 [i_6 - 4])), (var_3)))));
                    arr_18 [i_0] [i_0] [i_0] [(signed char)1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min(((short)-205), (var_1))))));
                    var_25 = ((/* implicit */unsigned short) min((134217727LL), (((/* implicit */long long int) ((((/* implicit */int) var_5)) > (((/* implicit */int) min((((/* implicit */signed char) var_7)), (var_8)))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_7 = 1; i_7 < 14; i_7 += 1) 
        {
            for (int i_8 = 0; i_8 < 16; i_8 += 3) 
            {
                {
                    arr_23 [i_0] = ((/* implicit */unsigned short) (((~(((/* implicit */int) var_13)))) / (((((/* implicit */_Bool) 4534434996358662463ULL)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (short)11798))))));
                    arr_24 [i_0] [i_7] [i_8] [i_0] = ((/* implicit */int) min((((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_11 [4LL] [6U]))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_7 + 2] [i_8])))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)74))))) : (min((((/* implicit */long long int) (short)-11782)), (134217724LL)))))));
                    arr_25 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) -134217752LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))));
                }
            } 
        } 
    }
    var_26 = ((_Bool) min((((/* implicit */long long int) var_16)), (((((/* implicit */_Bool) (unsigned short)41178)) ? (134217732LL) : (134217739LL)))));
    var_27 = ((/* implicit */signed char) min((4534434996358662462ULL), (((/* implicit */unsigned long long int) -134217752LL))));
}
