/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150458
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
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                arr_17 [i_0] [1] [i_3] [i_3] [i_4] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 2260132903U)) ? (-458324285) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (unsigned short)14521)) : (((((/* implicit */_Bool) -3229256974056496427LL)) ? (((/* implicit */int) (unsigned char)20)) : (((/* implicit */int) (unsigned short)57284))))))));
                                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (-(max((2754661786455439804LL), (((/* implicit */long long int) 2047)))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        var_18 *= ((/* implicit */short) min((((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) 373377020)) ? (((/* implicit */unsigned long long int) 3553063730U)) : (10018398085067953904ULL))))), ((~(23U)))));
                        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (8428345988641597712ULL) : (((/* implicit */unsigned long long int) 2047))));
                    }
                    for (long long int i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        var_20 *= ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -2073)) ? (1965097165) : (((/* implicit */int) (_Bool)1))))))))));
                        arr_23 [i_2] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (((((/* implicit */_Bool) 8428345988641597711ULL)) ? (((/* implicit */unsigned long long int) 0)) : (10018398085067953904ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 8428345988641597733ULL)))))), (((/* implicit */unsigned long long int) (~(((int) -2048)))))));
                        var_21 *= ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) 4467570830351532032ULL)) ? (((/* implicit */int) (unsigned short)12520)) : (((/* implicit */int) (unsigned short)6400)))));
                    }
                    arr_24 [i_0] [i_1] [(unsigned short)8] = ((/* implicit */short) ((min((((/* implicit */unsigned int) (-(0)))), (((4130633352U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39547))))))) ^ (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)65522)))))));
                }
            } 
        } 
    } 
    var_22 = (~(-8799667443171826976LL));
}
