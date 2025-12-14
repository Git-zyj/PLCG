/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185089
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-35)) + (2147483647))) << (((var_9) - (3538938814859072656ULL)))))) ? (min((var_3), (((/* implicit */unsigned long long int) var_2)))) : (max((((/* implicit */unsigned long long int) var_8)), (var_3))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_7 [15ULL] [i_0] = ((/* implicit */short) min((max((-2888161425792330169LL), (((/* implicit */long long int) arr_1 [i_0 - 1])))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_0 + 1])))))));
            var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((int) min((max((2888161425792330162LL), (2888161425792330164LL))), (-6185997878256858409LL)))))));
            /* LoopNest 2 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    {
                        var_15 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) arr_1 [i_0 - 1]))) ? (((/* implicit */int) max((arr_5 [i_0] [i_0 - 1] [i_0]), (((/* implicit */unsigned char) arr_6 [i_2] [i_2]))))) : (((/* implicit */int) arr_5 [i_3] [11LL] [i_1]))));
                        var_16 = ((/* implicit */_Bool) max((1466068311), (((/* implicit */int) (unsigned short)26806))));
                    }
                } 
            } 
        }
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (short i_5 = 2; i_5 < 15; i_5 += 4) 
            {
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0 + 1]))));
                arr_17 [i_0] [i_0] [i_5] = ((unsigned short) (_Bool)1);
                var_18 -= ((/* implicit */short) var_6);
            }
            for (unsigned char i_6 = 2; i_6 < 17; i_6 += 3) 
            {
                var_19 = ((/* implicit */short) ((int) (unsigned short)65528));
                var_20 = ((/* implicit */signed char) ((unsigned short) arr_21 [i_0 + 1]));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 18; i_7 += 4) 
                {
                    for (short i_8 = 0; i_8 < 18; i_8 += 2) 
                    {
                        {
                            arr_27 [i_4] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1135006932)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_11 [i_0] [i_0]))))) ? (((/* implicit */int) arr_25 [i_8] [i_6 - 2] [i_6 - 1] [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) ((((/* implicit */int) arr_1 [i_4])) > (((/* implicit */int) var_12)))))));
                            var_21 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_18 [i_8] [i_6] [i_8]))));
                            var_22 = ((/* implicit */unsigned int) ((_Bool) (signed char)-35));
                            arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_14 [i_0] [(unsigned short)6] [(unsigned short)6]);
                            arr_29 [i_0] = ((((/* implicit */_Bool) ((signed char) var_5))) ? (-1466068311) : (((((/* implicit */int) arr_10 [2U] [2U] [2U])) << (((-1466068328) + (1466068347))))));
                        }
                    } 
                } 
            }
            arr_30 [i_0] = ((((/* implicit */int) arr_10 [i_0 + 1] [i_0 + 1] [i_0 + 1])) <= (((/* implicit */int) arr_10 [i_0 + 1] [i_0 + 1] [i_0 + 1])));
        }
        for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 4) /* same iter space */
        {
            var_23 = max((((max((((/* implicit */long long int) arr_9 [(unsigned short)9] [(short)12] [i_0] [(short)12])), (arr_23 [9] [9] [i_9]))) + (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_32 [i_0] [i_9] [i_0 + 1])))))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (short)27693)), (-2888161425792330164LL)))) ? (min((((/* implicit */unsigned int) arr_0 [i_9] [i_9])), (var_8))) : (((/* implicit */unsigned int) ((int) arr_8 [i_9] [i_0] [i_0] [i_0])))))));
            arr_33 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-2888161425792330175LL)));
            arr_34 [15] [i_9] [i_0] = (_Bool)1;
            var_24 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_2 [i_0])), (max((((/* implicit */unsigned int) arr_32 [i_0 + 1] [i_0] [i_0 + 1])), (((unsigned int) (unsigned char)128))))));
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            var_25 = ((/* implicit */short) var_1);
            arr_37 [(signed char)0] [(signed char)0] |= ((/* implicit */signed char) ((unsigned short) min((((((/* implicit */long long int) ((/* implicit */int) var_6))) & (-2888161425792330166LL))), (((/* implicit */long long int) (unsigned short)14720)))));
        }
    }
    for (short i_11 = 0; i_11 < 23; i_11 += 1) 
    {
        arr_41 [i_11] = ((/* implicit */int) (!((!(((/* implicit */_Bool) ((unsigned short) arr_38 [i_11])))))));
        var_26 *= arr_38 [i_11];
        arr_42 [i_11] = max(((~(-1466068328))), (((1767270994) >> ((((((_Bool)1) ? (4294967295U) : (((/* implicit */unsigned int) 262142)))) - (4294967285U))))));
        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) -5280307118589507362LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_39 [i_11] [(_Bool)1]))), (((/* implicit */unsigned long long int) ((1466068314) > (arr_40 [i_11]))))))) ? (((/* implicit */unsigned int) max(((~(-1466068312))), (max((((/* implicit */int) var_11)), (arr_40 [i_11])))))) : (((unsigned int) (+(((/* implicit */int) (unsigned char)243)))))));
    }
    var_28 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_8)), (var_4)))) ? (((unsigned int) var_8)) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
}
