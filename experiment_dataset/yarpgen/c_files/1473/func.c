/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1473
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 12; i_3 += 2) /* same iter space */
                    {
                        var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)2)))))));
                        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (+((~(((/* implicit */int) (!(((/* implicit */_Bool) 8811179836115581256ULL))))))))))));
                        arr_10 [i_0] [i_2] = (-((+(var_6))));
                    }
                    for (int i_4 = 0; i_4 < 12; i_4 += 2) /* same iter space */
                    {
                        arr_13 [i_0] [1U] [i_1] [i_2] [i_0] [i_4] = ((((/* implicit */int) (!(((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_12))))))) % (((((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) var_4))))) | ((-(-1629971112))))));
                        var_20 = ((/* implicit */signed char) (((+(((((/* implicit */long long int) ((/* implicit */int) var_16))) / (var_11))))) - (((/* implicit */long long int) var_15))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 12; i_5 += 2) /* same iter space */
                    {
                        arr_17 [i_0] [i_0] [i_0] [i_0] [(signed char)6] = ((/* implicit */long long int) (+((~(((/* implicit */int) var_14))))));
                        var_21 = ((((((/* implicit */unsigned int) var_15)) < (var_13))) ? ((~(((/* implicit */int) var_4)))) : ((~(((/* implicit */int) var_3)))));
                        arr_18 [i_0] [i_0] [i_0] [i_0] [11] = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) var_16))))) < ((-(((/* implicit */int) var_3))))));
                        arr_19 [i_0] [i_1] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) ((unsigned char) (~(((/* implicit */int) var_1)))));
                        arr_20 [i_2] [i_2] [i_2] [i_2] [i_2] = (!(((/* implicit */_Bool) (-(((/* implicit */int) var_4))))));
                    }
                    var_22 |= ((/* implicit */unsigned char) ((((((/* implicit */int) var_2)) | (((((/* implicit */int) var_8)) | (((/* implicit */int) var_1)))))) ^ ((~(-1175197253)))));
                    var_23 = ((/* implicit */unsigned int) ((8811179836115581242ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 15; i_6 += 4) 
    {
        for (int i_7 = 0; i_7 < 15; i_7 += 4) 
        {
            {
                var_24 = ((/* implicit */_Bool) ((((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) >= (var_5))))) ^ (((var_11) + (((/* implicit */long long int) var_7)))))) + (9223372036854775807LL))) << (((/* implicit */int) ((unsigned char) (~(((/* implicit */int) (unsigned short)1023))))))));
                var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((_Bool) (-(((-1175197237) % (1629971110)))))))));
            }
        } 
    } 
    var_26 = (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) * (((/* implicit */int) ((signed char) (unsigned short)36224)))))));
}
