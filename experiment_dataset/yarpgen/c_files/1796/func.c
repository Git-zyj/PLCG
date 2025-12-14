/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1796
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) var_3))) ^ (3573691678331874677LL))), (((/* implicit */long long int) var_11))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (~(((/* implicit */int) var_6))))))) : ((+(min((((/* implicit */long long int) (unsigned char)236)), (-3573691678331874679LL)))))));
    var_21 ^= ((/* implicit */unsigned short) min((max((((/* implicit */long long int) min((((/* implicit */short) var_17)), (var_15)))), (((((/* implicit */_Bool) -3573691678331874690LL)) ? (var_1) : (((/* implicit */long long int) 0U)))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) max((var_6), (var_17)))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) min((min((-3573691678331874677LL), (3885650868875683663LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned char)11)) : (((/* implicit */int) var_10)))))));
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (3573691678331874689LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))))));
        var_23 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)231)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_0 [(short)3] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))))));
    }
    var_24 = ((/* implicit */unsigned char) var_11);
    /* LoopNest 2 */
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        for (unsigned int i_2 = 1; i_2 < 19; i_2 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_4 = 2; i_4 < 20; i_4 += 3) 
                    {
                        var_25 = ((/* implicit */unsigned int) ((arr_8 [i_4 + 1]) ? (((/* implicit */int) arr_12 [i_1])) : (((/* implicit */int) ((3993412114U) != (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
                        var_26 = ((/* implicit */unsigned short) var_1);
                        var_27 = ((/* implicit */long long int) (unsigned short)40030);
                    }
                    for (long long int i_5 = 1; i_5 < 20; i_5 += 1) 
                    {
                        var_28 = ((/* implicit */long long int) (_Bool)1);
                        var_29 = ((/* implicit */unsigned short) (unsigned char)112);
                        var_30 = ((/* implicit */signed char) (short)-2388);
                    }
                    for (long long int i_6 = 3; i_6 < 20; i_6 += 2) 
                    {
                        arr_22 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_6 - 3] [i_6 - 3] [i_6 - 3] [i_3] [i_3] [i_3])) ? (((/* implicit */int) (unsigned short)26818)) : (((/* implicit */int) arr_19 [i_6 - 1] [i_6 - 2] [i_6] [(unsigned short)7] [i_6] [i_2 + 2]))));
                        var_31 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)127))));
                        arr_23 [i_3] [i_3] [i_1] [(signed char)13] [i_3] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)127)))))));
                    }
                    var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) (short)9352)) : (((/* implicit */int) (unsigned char)211))))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_6 [i_1]))))) : (((/* implicit */int) (short)32767))));
                }
                var_33 = ((/* implicit */_Bool) arr_9 [i_1] [i_1]);
            }
        } 
    } 
}
