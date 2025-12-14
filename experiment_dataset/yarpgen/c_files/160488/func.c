/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160488
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
    for (unsigned int i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        var_20 = max((((/* implicit */int) (((+(((/* implicit */int) (unsigned short)23160)))) < (((((/* implicit */int) (signed char)46)) % (((/* implicit */int) (unsigned short)5424))))))), ((+((+(1665193450))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) min(((-(-268435456))), (((/* implicit */int) min((min(((unsigned char)55), (((/* implicit */unsigned char) (_Bool)1)))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 2466256641U))))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1195658176U))));
        arr_8 [i_1] [i_1] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)13)) ? (288230374004228096LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) >= (-430764576)))))));
        var_21 = ((/* implicit */unsigned short) ((_Bool) ((unsigned int) (unsigned char)247)));
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 1; i_4 < 22; i_4 += 2) 
                {
                    {
                        var_22 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-1805))));
                        var_23 = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)87))));
                        arr_16 [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 1562318985))));
                    }
                } 
            } 
        } 
    }
    var_24 = ((/* implicit */short) 9223372036854775807LL);
    var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (-(((/* implicit */int) var_10)))))));
}
