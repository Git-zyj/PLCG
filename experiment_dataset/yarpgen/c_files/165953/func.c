/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165953
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
    var_15 = ((/* implicit */signed char) var_11);
    var_16 = ((/* implicit */signed char) ((11622508126471707002ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)125)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        var_17 = ((/* implicit */short) ((((/* implicit */int) ((signed char) arr_0 [i_0 + 2]))) & ((~(((/* implicit */int) (unsigned char)18))))));
        var_18 = ((/* implicit */short) arr_0 [i_0 + 2]);
        /* LoopSeq 3 */
        for (unsigned char i_1 = 4; i_1 < 12; i_1 += 4) 
        {
            var_19 ^= var_11;
            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (unsigned short)62796))));
            /* LoopSeq 3 */
            for (unsigned char i_2 = 2; i_2 < 12; i_2 += 3) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 3) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned char) var_9);
                    var_22 = ((/* implicit */short) (-(((((/* implicit */_Bool) (short)8116)) ? (((/* implicit */int) (unsigned char)120)) : (((/* implicit */int) arr_2 [i_3]))))));
                    var_23 = ((/* implicit */unsigned char) ((signed char) (unsigned char)232));
                }
                for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 3) /* same iter space */
                {
                    arr_14 [i_4] [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) (~(((arr_9 [i_0] [i_0] [i_2] [i_0]) ? (((/* implicit */int) (unsigned short)41282)) : (((/* implicit */int) var_7))))));
                    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((_Bool) arr_5 [i_4]))) : ((~(((/* implicit */int) (unsigned char)232))))));
                    var_25 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) var_13)) - (((/* implicit */int) arr_0 [i_0])))));
                    /* LoopSeq 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned char) (unsigned short)2739);
                        arr_18 [i_0] [i_0] [i_2] [i_4] [i_2] = ((/* implicit */unsigned char) arr_4 [i_0 + 2] [i_2 + 1] [i_2 + 1]);
                    }
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((/* implicit */int) var_12)) / (((/* implicit */int) (short)24576)))))));
                        var_28 = ((/* implicit */short) ((3566106017U) - (((/* implicit */unsigned int) ((/* implicit */int) ((arr_10 [i_0] [i_0 + 2] [i_1 - 3] [i_2] [i_0] [i_1 - 3]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0 - 1] [i_1 - 1] [i_0 - 1] [i_2] [i_6])))))))));
                        var_29 = ((/* implicit */_Bool) ((unsigned char) (-(((/* implicit */int) (unsigned char)106)))));
                    }
                    var_30 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1 - 3]))))) - ((~(((/* implicit */int) (signed char)125))))));
                }
                var_31 = ((/* implicit */short) arr_0 [i_0]);
                var_32 = ((/* implicit */unsigned char) ((signed char) (!(((/* implicit */_Bool) (unsigned char)197)))));
            }
            for (unsigned char i_7 = 2; i_7 < 12; i_7 += 3) /* same iter space */
            {
                var_33 = ((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_0] [i_0 + 1] [i_0 - 1] [i_1 - 4] [i_1 - 1] [i_7 + 1])) * (((/* implicit */int) (_Bool)0))));
                arr_25 [i_1 - 3] [i_1] [i_1 - 3] [i_0 - 1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (short)13685)) : (((/* implicit */int) (signed char)-121)))) - (((/* implicit */int) ((-659106118123938433LL) < (((/* implicit */long long int) 3835590898U)))))));
                var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_7] [i_7 + 1] [i_7] [i_7] [i_7 - 2] [i_1 - 3])) ? (arr_19 [i_7 - 2] [i_7 + 1] [i_7 - 1] [i_1 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_7] [i_7 - 1] [i_7 - 2] [i_7 + 1] [i_7 + 1] [i_1 - 3])))));
            }
            for (unsigned char i_8 = 2; i_8 < 12; i_8 += 3) /* same iter space */
            {
                arr_28 [i_8] [i_1] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0 + 1] [i_0 - 1] [i_1 - 2] [i_8] [i_8] [i_1 - 2])) ? (((/* implicit */int) arr_3 [i_8 + 1])) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) var_13)) : (((((/* implicit */_Bool) arr_13 [i_8] [i_1 - 4] [i_1 - 4] [i_8])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)10))))));
                var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) ((unsigned char) var_10)))));
                var_36 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-121)) + ((-(((/* implicit */int) (_Bool)0))))));
            }
            arr_29 [i_0] [i_1 - 2] = ((/* implicit */long long int) (signed char)-64);
            var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_1 - 3] [i_0 + 1] [i_1] [i_1 - 3])) ? (((/* implicit */int) arr_8 [i_1] [i_1 - 3] [i_0 - 1] [i_1 - 3] [i_1] [i_1])) : (((/* implicit */int) arr_8 [i_0] [i_0 + 2] [i_0 + 2] [i_0] [i_1] [i_0 + 2]))));
        }
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
        {
            var_38 = ((/* implicit */short) (~(((/* implicit */int) arr_3 [i_9]))));
            var_39 = ((/* implicit */signed char) (unsigned char)26);
            arr_34 [i_0 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((3651380527U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15872)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_9] [i_9 - 1] [i_9 - 1] [i_9 - 1] [(_Bool)0] [i_9]))) : (((arr_16 [i_0] [i_0] [(unsigned short)0] [i_0] [i_9] [i_9 - 1] [i_0 + 2]) + (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_0 + 1] [i_9 - 1])))))));
        }
        for (short i_10 = 4; i_10 < 12; i_10 += 3) 
        {
            var_40 = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)238)) ^ (((/* implicit */int) var_4)))) > (((/* implicit */int) ((((/* implicit */int) var_8)) < (((/* implicit */int) arr_21 [(unsigned char)8] [i_10] [i_10] [i_0] [(unsigned char)8])))))));
            var_41 = ((/* implicit */signed char) (((+(((/* implicit */int) (signed char)-103)))) == (((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_10))))));
        }
    }
    var_42 ^= ((unsigned char) ((((/* implicit */int) ((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) (_Bool)1))))) <= (((/* implicit */int) (unsigned char)213))));
}
