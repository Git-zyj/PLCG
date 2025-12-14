/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142573
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
    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((unsigned char) ((long long int) ((unsigned char) var_1)))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */long long int) min((var_14), (((long long int) ((_Bool) var_0)))));
                            var_15 *= ((/* implicit */_Bool) var_11);
                            var_16 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((var_3) | (((/* implicit */long long int) ((/* implicit */int) var_8))))) < (((/* implicit */long long int) ((/* implicit */int) var_8)))))), (min((max((var_7), (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) ((var_11) >> (((var_11) - (2734281881U))))))))));
                            var_17 -= ((/* implicit */signed char) (+(((/* implicit */int) (((~(((/* implicit */int) var_10)))) <= (((int) var_12)))))));
                        }
                    } 
                } 
                var_18 -= ((/* implicit */int) ((long long int) ((unsigned char) ((unsigned short) var_2))));
                arr_12 [i_1] = ((/* implicit */long long int) ((_Bool) ((unsigned long long int) -20758596)));
                arr_13 [i_1] = ((/* implicit */short) ((unsigned char) ((unsigned int) (~(var_2)))));
            }
        } 
    } 
    var_19 = var_2;
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((unsigned int) max((((unsigned long long int) var_0)), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5)))))))))));
    /* LoopSeq 2 */
    for (short i_4 = 0; i_4 < 10; i_4 += 4) 
    {
        arr_16 [i_4] [i_4] = ((/* implicit */long long int) var_0);
        arr_17 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) var_8)) == ((+(((int) var_7))))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 10; i_5 += 4) 
        {
            for (short i_6 = 0; i_6 < 10; i_6 += 4) 
            {
                {
                    var_21 = ((/* implicit */int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6967))) - (16599367097107460747ULL))));
                    var_22 = ((/* implicit */short) (+(((int) var_0))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_8 = 0; i_8 < 20; i_8 += 4) 
        {
            arr_30 [i_8] [i_8] = ((unsigned int) ((short) var_0));
            var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned int) var_2)))));
        }
        arr_31 [i_7] [i_7] &= ((/* implicit */unsigned int) ((int) ((unsigned int) var_4)));
    }
}
