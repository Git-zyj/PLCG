/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145298
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
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) max((((/* implicit */unsigned int) var_5)), (max((var_4), (((/* implicit */unsigned int) 32736))))))) < (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 15; i_3 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            var_10 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (~(arr_4 [i_2])))), (var_6)));
                            var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) & (((/* implicit */int) (signed char)-19))))) ? (((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_3])) : (((/* implicit */int) arr_7 [i_2] [i_2] [i_2 + 1]))))) ? (max((((((/* implicit */long long int) 1857809740U)) & (8658654068736LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (var_5) : (var_5)))))) : (((/* implicit */long long int) arr_1 [i_1]))));
                            var_12 = ((unsigned char) 2437157556U);
                            var_13 = ((/* implicit */_Bool) min((min((((((-8658654068747LL) + (9223372036854775807LL))) << (((((-8658654068751LL) + (8658654068772LL))) - (21LL))))), (((/* implicit */long long int) ((_Bool) var_3))))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2 + 1] [i_2 + 1] [i_4]))) < (var_4))))));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 15; i_5 += 3) /* same iter space */
                        {
                            arr_17 [i_0] [i_0] [i_1] [i_0] [i_3] [i_5] [i_5] = ((/* implicit */signed char) ((arr_15 [i_0] [i_1] [4LL] [i_3] [i_2 + 1]) != (((int) var_4))));
                            var_14 = ((/* implicit */unsigned int) var_7);
                        }
                        for (int i_6 = 0; i_6 < 15; i_6 += 3) /* same iter space */
                        {
                            var_15 = ((/* implicit */unsigned char) arr_18 [i_0] [i_2] [i_2 + 1] [i_0] [i_0]);
                            var_16 = ((/* implicit */short) (+(1857809753U)));
                        }
                        arr_20 [i_0] [i_1] [(unsigned short)3] [i_2] = ((/* implicit */unsigned char) ((_Bool) (short)-617));
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_1] [i_2 + 1] [i_2] [i_2] [6ULL])) ? (max((((/* implicit */unsigned int) arr_5 [i_2 - 1])), (max((((/* implicit */unsigned int) arr_9 [i_3] [i_2] [i_1] [i_0])), (127U))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)32)))))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */int) max((((((((/* implicit */_Bool) var_3)) ? (8658654068749LL) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) + (8658654068736LL))), (max((((/* implicit */long long int) 480U)), (-8658654068749LL)))));
    }
    var_19 = ((/* implicit */int) var_0);
    var_20 = ((/* implicit */signed char) min(((((!(((/* implicit */_Bool) 7140225003000632003LL)))) ? (((/* implicit */unsigned int) ((var_5) >> (((/* implicit */int) (signed char)15))))) : ((~(1825458840U))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_1)) + (((/* implicit */int) var_7))))) ? (((((/* implicit */unsigned int) var_5)) & (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) -1)) < (2469508455U)))))))));
    var_21 = ((/* implicit */unsigned char) var_7);
}
