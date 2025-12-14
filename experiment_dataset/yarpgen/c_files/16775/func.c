/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16775
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
    var_17 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) -2062376640))) ? (((/* implicit */int) (unsigned short)14848)) : (((/* implicit */int) ((short) -1072406034)))))) / (((unsigned long long int) -2062376640))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-36))) + (2230021618353874790LL)));
                            var_18 = ((/* implicit */int) (~(9223372036854775807LL)));
                        }
                    } 
                } 
                var_19 += ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned long long int) 4294967280U)));
                arr_12 [i_0] [i_1] = ((/* implicit */unsigned char) ((((int) var_1)) <= ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
                arr_13 [i_0] [11U] |= ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */long long int) ((1091236298) >> (((577826169U) - (577826142U)))))) & (((long long int) -2062376644)))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) var_1);
    var_21 = ((/* implicit */_Bool) ((unsigned long long int) max(((unsigned short)20002), (((/* implicit */unsigned short) ((short) (short)14894))))));
    var_22 = ((/* implicit */long long int) ((short) ((unsigned long long int) min((((/* implicit */unsigned long long int) 9223372036854775807LL)), (4611686018427379712ULL)))));
}
