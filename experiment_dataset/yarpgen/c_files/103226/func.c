/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103226
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 -= ((/* implicit */unsigned short) var_9);
        var_14 = (+(arr_0 [i_0] [i_0]));
    }
    /* LoopNest 2 */
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        for (short i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            {
                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (((!(var_8))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_3 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)143)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && ((_Bool)1)))) : (((((/* implicit */_Bool) var_0)) ? (var_11) : (-1111328527))))) : (((/* implicit */int) ((((/* implicit */_Bool) 574846338)) || (((/* implicit */_Bool) var_7))))))))));
                arr_6 [i_1] &= ((/* implicit */unsigned int) (((-(var_2))) * (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))));
                arr_7 [(signed char)1] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((arr_3 [i_1] [i_1]) | (((/* implicit */long long int) ((/* implicit */int) (signed char)-32))))) / (((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned short)19851))))))) ? (((/* implicit */long long int) (+((-(((/* implicit */int) var_8))))))) : ((+(((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) * (var_2)))))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) max((var_2), (((((/* implicit */_Bool) (short)10)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
    var_17 = ((/* implicit */unsigned long long int) ((var_8) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_7)), (var_3)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((2493391465U) < (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))) : (max((((/* implicit */unsigned int) var_0)), (max((3744651347U), (((/* implicit */unsigned int) var_0))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 3; i_3 < 20; i_3 += 2) 
    {
        for (int i_4 = 2; i_4 < 21; i_4 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 24; i_5 += 3) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            arr_18 [i_3 - 3] [17LL] [i_5] [17LL] = ((/* implicit */unsigned int) ((unsigned long long int) min((((((/* implicit */int) var_9)) < (((/* implicit */int) arr_16 [i_3] [i_4] [i_5] [i_5])))), (var_6))));
                            var_18 = ((/* implicit */signed char) ((((arr_2 [i_3 - 3]) - (((/* implicit */unsigned int) arr_17 [(_Bool)1] [(_Bool)1] [i_3] [i_3 + 3] [i_3 - 2] [i_4 + 2])))) << (((((((/* implicit */_Bool) ((unsigned long long int) var_7))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_6))))) : (4890577148559379986LL))) + (31LL)))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (short i_7 = 2; i_7 < 22; i_7 += 2) 
                {
                    arr_22 [i_3] [i_3] [i_7 - 1] [i_7 + 2] |= ((_Bool) ((((/* implicit */_Bool) 939524096)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : ((-(arr_15 [i_3] [i_4] [i_7])))));
                    var_19 -= ((((/* implicit */_Bool) max((((/* implicit */signed char) var_9)), (arr_8 [i_4])))) ? (((/* implicit */int) max((arr_8 [i_3 + 1]), (arr_8 [i_4 + 2])))) : (((((/* implicit */_Bool) var_0)) ? (2096128) : (((/* implicit */int) var_8)))));
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 24; i_8 += 4) 
                    {
                        for (short i_9 = 2; i_9 < 23; i_9 += 2) 
                        {
                            {
                                var_20 = ((((/* implicit */unsigned long long int) (+((-(arr_20 [i_8])))))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_4] [12])) ? (9278842617845720774ULL) : (((/* implicit */unsigned long long int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) (short)13889)) ? (((/* implicit */unsigned long long int) var_2)) : (14584841670356828850ULL))))));
                                arr_27 [i_3] [i_3 + 3] [i_4] [i_7] [i_8] [i_8] [i_4] = ((/* implicit */int) (((-(arr_9 [i_3 - 1] [i_4 + 3]))) >> (((arr_17 [i_3] [i_4] [i_7] [i_8] [(unsigned char)13] [i_9]) + (2130641878)))));
                                arr_28 [i_4] [19LL] [i_8] [19LL] = ((/* implicit */long long int) (+((+(max((((/* implicit */unsigned int) (unsigned char)252)), (544585493U)))))));
                                var_21 = ((/* implicit */short) -2765215057321810941LL);
                            }
                        } 
                    } 
                }
                arr_29 [i_4] = ((/* implicit */int) max((min((max((14712817612832294226ULL), (arr_24 [i_3 - 3] [i_3 - 3] [20LL]))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) > (1939278658918784294LL)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -5044299165254318953LL)) ? (max((arr_5 [i_3] [i_4]), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) ((int) var_11))))))));
            }
        } 
    } 
}
