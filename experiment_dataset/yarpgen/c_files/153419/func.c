/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153419
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */int) (((-(((/* implicit */int) (unsigned char)166)))) != ((-(((/* implicit */int) (unsigned char)89))))))) ^ (min((((((/* implicit */int) (unsigned char)163)) - (((/* implicit */int) (unsigned short)16785)))), (((((/* implicit */int) (signed char)30)) - (((/* implicit */int) (short)-32648))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */int) max((var_20), (((((min(((-(((/* implicit */int) (unsigned char)255)))), (((((/* implicit */int) (unsigned char)90)) + (((/* implicit */int) (unsigned char)8)))))) + (2147483647))) << (((((/* implicit */int) (signed char)101)) - (101)))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned char) (short)-6671);
                            arr_12 [i_2] [i_1] [10U] [i_0] [i_0] [i_2] = ((/* implicit */int) min((((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)96)), ((unsigned char)241)))))), (((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)30))) <= (1630465400U)))) <= (((((/* implicit */_Bool) (unsigned short)63713)) ? (((/* implicit */int) (signed char)-125)) : (((/* implicit */int) (unsigned char)179))))))));
                            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) min((348961879), (((/* implicit */int) min(((unsigned char)162), (((/* implicit */unsigned char) (signed char)-50))))))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((min((((/* implicit */long long int) (signed char)-50)), (3508710265244102473LL))), (((/* implicit */long long int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)72))))))) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) -348961879)) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) (unsigned char)255)))), ((-(((/* implicit */int) (unsigned char)55))))))) : (max((max((6124717218796545815LL), (((/* implicit */long long int) (unsigned char)34)))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)122)) > (((/* implicit */int) (_Bool)1))))))))))));
            }
        } 
    } 
}
