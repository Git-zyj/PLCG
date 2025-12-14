/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13896
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
    var_12 = ((/* implicit */int) ((var_0) ? (((/* implicit */unsigned int) (+(((((((/* implicit */int) (short)-18319)) + (2147483647))) << (((((/* implicit */int) var_6)) - (65)))))))) : (((min((var_11), (((/* implicit */unsigned int) (short)-18314)))) * (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)253)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 ^= ((((((/* implicit */_Bool) (unsigned char)47)) || (((/* implicit */_Bool) (short)18318)))) ? (8385080657010380277LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))));
        /* LoopSeq 2 */
        for (signed char i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            var_14 ^= ((7980429095123288571ULL) % (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)22006)) & (var_5)))));
            /* LoopSeq 2 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                arr_6 [i_0] [i_0] [i_2 - 1] = ((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_2] [i_2 - 1] [i_2 - 1] [i_1 - 1]))));
                var_15 = ((/* implicit */signed char) ((unsigned int) var_0));
                var_16 = ((/* implicit */unsigned long long int) ((long long int) var_4));
            }
            for (unsigned int i_3 = 3; i_3 < 19; i_3 += 1) 
            {
                /* LoopSeq 2 */
                for (int i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    var_17 -= ((/* implicit */_Bool) ((((((/* implicit */int) var_2)) + (2147483647))) >> (((arr_4 [i_1 - 3] [i_1 - 1] [i_1 - 3]) - (8790940927051803836ULL)))));
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_4] [i_4] [i_3 - 2] [i_3])) ? ((~(((/* implicit */int) arr_7 [i_0] [i_1] [i_3 - 3] [(signed char)2])))) : (((/* implicit */int) arr_12 [i_1] [i_1] [i_1 - 3] [i_1 + 1] [i_1]))));
                    var_19 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)18318))));
                }
                for (long long int i_5 = 2; i_5 < 17; i_5 += 3) 
                {
                    var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_3) ? (-7656982521781607491LL) : (((/* implicit */long long int) ((/* implicit */int) (short)18318))))))));
                    var_21 |= arr_11 [i_0] [i_1] [i_3] [(_Bool)1];
                    var_22 += ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) 1384789344217756693ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-18314))) : (var_11))));
                }
                var_23 = ((/* implicit */signed char) ((arr_8 [i_3] [i_1 - 3] [i_0] [i_0]) ? (((3109167012802934833ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (arr_4 [i_3 - 2] [i_3] [i_3 + 1])));
                var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) var_2))));
            }
        }
        for (signed char i_6 = 0; i_6 < 20; i_6 += 3) 
        {
            var_25 = ((signed char) ((signed char) arr_18 [i_0] [i_0] [i_6]));
            /* LoopNest 2 */
            for (long long int i_7 = 0; i_7 < 20; i_7 += 1) 
            {
                for (unsigned char i_8 = 2; i_8 < 19; i_8 += 1) 
                {
                    {
                        var_26 |= ((/* implicit */int) arr_13 [i_8 - 1] [(signed char)6] [(signed char)6] [i_0]);
                        var_27 |= ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) << (((((/* implicit */int) arr_9 [(unsigned char)2] [i_8 + 1] [i_8] [(unsigned char)2])) - (25574)))));
                        var_28 = ((/* implicit */int) ((long long int) (~(((/* implicit */int) arr_21 [i_0] [i_6])))));
                    }
                } 
            } 
        }
        arr_25 [i_0] = ((/* implicit */signed char) ((unsigned int) arr_18 [i_0] [i_0] [i_0]));
    }
}
