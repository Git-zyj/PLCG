/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167163
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
    var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 625162972)) && (((/* implicit */_Bool) (unsigned short)15177)))) ? (var_17) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)15169)) : (((/* implicit */int) (_Bool)1))))));
    var_19 = ((/* implicit */signed char) min((((long long int) var_6)), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)106))) ^ ((((_Bool)1) ? (-4336739086379276034LL) : (((/* implicit */long long int) var_16))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        var_20 = ((/* implicit */int) min((((/* implicit */unsigned int) arr_7 [i_1])), (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2]))) - (((((/* implicit */_Bool) arr_10 [(_Bool)1] [i_1] [i_1])) ? (1735585093U) : (((/* implicit */unsigned int) var_16))))))));
                        var_21 &= ((/* implicit */unsigned char) (+(((unsigned int) (unsigned short)15177))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        var_22 -= ((/* implicit */_Bool) max((((/* implicit */int) arr_6 [i_1] [i_1] [0U] [i_4])), (((((int) (signed char)99)) + ((~(((/* implicit */int) (_Bool)1))))))));
                        arr_13 [i_4] [i_1] [i_4] = ((/* implicit */signed char) (~(((/* implicit */int) min((arr_8 [i_0] [i_1] [i_2] [i_4]), (arr_8 [i_0] [i_1] [i_2] [i_4]))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        var_23 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) arr_7 [i_1]))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 0; i_6 < 13; i_6 += 2) 
                        {
                            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) max((arr_14 [i_1] [i_1] [i_1] [i_1]), (((/* implicit */unsigned char) (_Bool)1)))))));
                            var_25 = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)-53))));
                            var_26 += ((/* implicit */signed char) ((unsigned char) arr_8 [i_0] [i_1] [i_5] [i_6]));
                        }
                    }
                    /* LoopSeq 3 */
                    for (unsigned short i_7 = 3; i_7 < 11; i_7 += 3) 
                    {
                        var_27 = ((/* implicit */signed char) arr_7 [i_1]);
                        arr_22 [i_1] = ((/* implicit */unsigned int) (signed char)-19);
                        var_28 = ((/* implicit */_Bool) (+(((int) ((((/* implicit */_Bool) (unsigned short)27207)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))))));
                    }
                    for (unsigned short i_8 = 1; i_8 < 11; i_8 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned char) (-(var_3)));
                        arr_26 [i_1] [i_2] [(unsigned short)3] = ((/* implicit */_Bool) ((signed char) (unsigned char)123));
                    }
                    for (long long int i_9 = 0; i_9 < 13; i_9 += 3) 
                    {
                        var_30 = ((/* implicit */int) arr_30 [i_1]);
                        arr_31 [i_0] [i_1] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) max((((/* implicit */int) (unsigned char)123)), (2052659915)));
                    }
                    var_31 = ((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)0)), (253517318)));
                }
            } 
        } 
    } 
}
