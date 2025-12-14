/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108041
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
    var_18 = ((/* implicit */short) (+((((-(((/* implicit */int) (_Bool)0)))) << ((+(((/* implicit */int) (unsigned char)15))))))));
    var_19 -= ((/* implicit */unsigned long long int) (unsigned char)240);
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            arr_4 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(2618905323U))))));
            /* LoopSeq 2 */
            for (short i_2 = 1; i_2 < 23; i_2 += 2) 
            {
                var_20 = ((/* implicit */long long int) (unsigned char)110);
                var_21 ^= ((/* implicit */_Bool) var_9);
            }
            /* vectorizable */
            for (signed char i_3 = 0; i_3 < 24; i_3 += 2) 
            {
                /* LoopSeq 2 */
                for (int i_4 = 0; i_4 < 24; i_4 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (signed char i_5 = 1; i_5 < 22; i_5 += 2) 
                    {
                        arr_16 [i_1] [i_1] [(signed char)5] [i_1] [i_0] = ((/* implicit */unsigned char) ((signed char) arr_13 [(_Bool)1] [i_1 - 2] [i_1 - 2] [i_4] [i_5 - 1] [i_5]));
                        arr_17 [i_0] [i_1] [i_0] [i_4] [i_0] = ((/* implicit */signed char) 1125899906842623ULL);
                    }
                    arr_18 [i_0] [i_0] [i_1] [i_0] = ((_Bool) 18445618173802708993ULL);
                    arr_19 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_4);
                }
                for (int i_6 = 0; i_6 < 24; i_6 += 4) /* same iter space */
                {
                    arr_22 [i_0] [i_1] [i_0] = (-((-(((/* implicit */int) (unsigned char)145)))));
                    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (unsigned char)111))));
                }
                arr_23 [i_0] = (!(((/* implicit */_Bool) (unsigned char)110)));
                var_23 = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)145))));
            }
        }
        arr_24 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 18445618173802708993ULL)) ? (817173588) : (((/* implicit */int) (_Bool)0)))))));
        var_24 = ((/* implicit */_Bool) (signed char)64);
        arr_25 [(signed char)16] &= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) + (arr_3 [i_0] [(unsigned char)18] [i_0])))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_20 [i_0] [(signed char)3] [i_0 - 1] [i_0 - 2])), ((unsigned char)146)))) : (((/* implicit */int) (unsigned char)120))));
    }
    for (unsigned char i_7 = 2; i_7 < 12; i_7 += 3) 
    {
        arr_29 [i_7] = ((/* implicit */int) ((((/* implicit */int) (unsigned short)271)) < (min((min((((/* implicit */int) (short)15794)), (-817173588))), (((int) 2142748075))))));
        var_25 = ((/* implicit */unsigned int) max((var_25), ((+(((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)10))))) * (((unsigned int) 0))))))));
        var_26 += ((/* implicit */signed char) max(((!(var_15))), ((!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)144)) ^ (((/* implicit */int) (unsigned char)128)))))))));
    }
}
