/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17186
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)5620)) ? (1054249720) : (((/* implicit */int) (unsigned char)142))))) ? (((var_9) ? (3087381791240153371ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10191))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))))))));
        var_21 = ((/* implicit */signed char) var_1);
    }
    for (short i_1 = 1; i_1 < 16; i_1 += 2) 
    {
        arr_7 [i_1] |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3995370666915542770LL)) ? (((/* implicit */int) (short)5620)) : (((/* implicit */int) (short)3425))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-112)) + (2147483647))) << (((/* implicit */int) (unsigned char)0))))) : (15359362282469398245ULL)));
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_12 [i_2] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [14ULL] [i_1 - 1] [i_2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 12258648551350924764ULL)))))) : (((490354080875120433ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-97)))))));
                    arr_13 [i_2] [i_2] [14ULL] [i_3] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-10179))));
                    arr_14 [i_2] [i_2] = ((/* implicit */unsigned char) ((8250297746522122619ULL) << (((((((/* implicit */_Bool) (signed char)85)) ? ((+(((/* implicit */int) var_11)))) : (var_14))) - (43659)))));
                }
            } 
        } 
    }
    var_22 = ((/* implicit */short) var_19);
    var_23 = var_1;
}
