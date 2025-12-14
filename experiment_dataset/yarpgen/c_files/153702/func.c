/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153702
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
    var_15 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65535))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_5 [i_0 + 1] [i_1] [i_0 + 1])), ((unsigned short)7))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
                {
                    arr_9 [16LL] [i_1] [i_2] = ((/* implicit */long long int) arr_3 [i_0] [i_1]);
                    var_17 ^= ((/* implicit */long long int) (-(1048575ULL)));
                    arr_10 [8U] [i_1] [8U] &= ((/* implicit */signed char) ((27888661062028560ULL) <= (11155476795910421908ULL)));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        arr_15 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_3]);
                        /* LoopSeq 1 */
                        for (short i_5 = 0; i_5 < 24; i_5 += 4) 
                        {
                            var_18 = (~(2147483647));
                            var_19 -= ((((/* implicit */_Bool) (unsigned short)65535)) ? (-1) : (((/* implicit */int) arr_11 [i_0 + 1] [i_0 + 1] [i_3])));
                            var_20 = ((/* implicit */signed char) (+(((/* implicit */int) (short)32760))));
                        }
                        var_21 += ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)22552)) ? (-1) : (((/* implicit */int) (unsigned short)27))));
                        var_22 = ((/* implicit */unsigned int) ((unsigned long long int) (unsigned short)13));
                    }
                    arr_19 [(short)16] |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)26))));
                    arr_20 [i_1] = arr_0 [i_0];
                    var_23 = ((/* implicit */int) var_11);
                }
                /* LoopNest 3 */
                for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 3) 
                {
                    for (short i_7 = 2; i_7 < 23; i_7 += 4) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 24; i_8 += 2) 
                        {
                            {
                                arr_28 [i_0] [i_1] [i_6] [i_1] [i_8] = ((/* implicit */int) ((((/* implicit */int) (unsigned short)13)) != (1933732224)));
                                var_24 = ((/* implicit */_Bool) min((268435455ULL), (((/* implicit */unsigned long long int) 1577821483277490062LL))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_25 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) -1577821483277490061LL))));
}
