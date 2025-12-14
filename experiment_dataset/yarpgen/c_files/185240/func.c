/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185240
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
    var_10 |= var_3;
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_11 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) >> (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 2130706432))))) < (((/* implicit */int) (short)-29083)))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            var_12 |= ((/* implicit */long long int) ((unsigned int) (!(((/* implicit */_Bool) arr_0 [i_1] [i_0])))));
            var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) max((((/* implicit */unsigned int) ((_Bool) ((unsigned int) 684972678115364582ULL)))), (1542022157U))))));
        }
        var_14 *= ((/* implicit */signed char) max((((/* implicit */int) ((939524096U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57448)))))), ((~(((/* implicit */int) var_9))))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) 
    {
        var_15 += ((/* implicit */signed char) (+((~(((/* implicit */int) arr_8 [i_2]))))));
        /* LoopNest 3 */
        for (unsigned char i_3 = 2; i_3 < 18; i_3 += 4) 
        {
            for (unsigned short i_4 = 0; i_4 < 20; i_4 += 3) 
            {
                for (long long int i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 0; i_6 < 20; i_6 += 3) 
                        {
                            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_3 - 1])) ? (((/* implicit */int) arr_11 [i_3 + 1])) : (((/* implicit */int) (_Bool)1))));
                            var_17 = ((/* implicit */signed char) 13538092179213463028ULL);
                            var_18 |= ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_3 + 1] [i_3 + 2]))));
                        }
                        var_19 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (4602678819172646912LL) : (-4602678819172646912LL)));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */unsigned long long int) arr_12 [i_2]);
    }
    for (unsigned short i_7 = 0; i_7 < 12; i_7 += 4) 
    {
        var_21 = ((/* implicit */unsigned long long int) ((((min((((/* implicit */unsigned long long int) var_8)), (4503530907893760ULL))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_8 [i_7])) : (((/* implicit */int) (signed char)3))))))) || (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)6)))))));
        arr_22 [i_7] = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)56))));
        var_22 = (+(((/* implicit */int) (signed char)-32)));
    }
}
