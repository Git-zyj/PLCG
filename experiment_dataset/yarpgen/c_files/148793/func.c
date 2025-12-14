/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148793
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 23; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) (~(((/* implicit */int) max((min((var_13), (((/* implicit */unsigned short) var_1)))), (((/* implicit */unsigned short) arr_7 [i_0] [i_0] [i_3 - 1] [i_2 + 1]))))))))));
                                arr_12 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 15647692577066916687ULL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)18477)) ? (2005843879) : (((/* implicit */int) (_Bool)1))))) : (arr_10 [i_2] [i_2] [i_2])));
                                var_15 = ((((/* implicit */_Bool) ((unsigned char) var_11))) ? (((((/* implicit */_Bool) (short)-18478)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (short)18477))))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_7 [i_0] [i_1] [i_2 + 2] [i_3 - 2]))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned char) var_12);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_5 = 0; i_5 < 17; i_5 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned int i_6 = 1; i_6 < 14; i_6 += 3) 
        {
            for (unsigned int i_7 = 0; i_7 < 17; i_7 += 3) 
            {
                for (int i_8 = 4; i_8 < 15; i_8 += 3) 
                {
                    {
                        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) -2005843898)) ? (((/* implicit */int) (short)-18492)) : (-1136207319))) : (((/* implicit */int) (short)29805))));
                        /* LoopSeq 2 */
                        for (int i_9 = 0; i_9 < 17; i_9 += 1) 
                        {
                            arr_24 [i_7] [i_5] [i_7] [i_8] [i_8 + 1] [i_5] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (!((!(var_1))))))) == (max((((/* implicit */long long int) (+(2143507993)))), (var_5)))));
                            arr_25 [i_8] [i_6] [i_6] [i_5] [i_5] = (((!(((((/* implicit */_Bool) (short)-12656)) || (((/* implicit */_Bool) var_3)))))) ? (((((/* implicit */_Bool) var_5)) ? (arr_22 [i_8 - 4] [i_6 + 3] [i_5] [i_5] [i_6 + 3] [i_6 + 3]) : (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) 381128309)));
                            arr_26 [i_5] [i_5] = ((/* implicit */_Bool) (unsigned short)5539);
                        }
                        for (unsigned char i_10 = 2; i_10 < 16; i_10 += 1) 
                        {
                            var_18 ^= ((/* implicit */long long int) 9995837322975567910ULL);
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_6])) | (((/* implicit */int) var_6))));
                        }
                        var_20 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((short) arr_28 [i_8 + 1] [i_8] [16ULL] [i_6] [i_5]))) && ((!(((/* implicit */_Bool) 319981176))))))))));
                        arr_30 [i_5] [i_6 + 3] [i_6 + 3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) max(((short)-18478), (var_6)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)3273)) ? (((/* implicit */long long int) ((/* implicit */int) (short)24999))) : (arr_22 [i_6] [i_7] [i_5] [i_8] [i_5] [i_5])))))))));
                    }
                } 
            } 
        } 
        arr_31 [i_5] = ((/* implicit */long long int) -498277117);
    }
    var_21 = ((/* implicit */signed char) (-(var_0)));
}
