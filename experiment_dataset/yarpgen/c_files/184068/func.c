/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184068
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
    var_14 = ((/* implicit */int) ((3221225472U) >= (var_0)));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 4; i_0 < 22; i_0 += 3) 
    {
        arr_3 [i_0 - 2] = ((/* implicit */int) (unsigned char)0);
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 1073741823U))));
                    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */int) ((3221225471U) <= (1073741824U)))) + (1145356441))))));
                }
            } 
        } 
        arr_8 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)77))) * (451449374469374888ULL)));
        arr_9 [i_0 - 1] = ((/* implicit */unsigned int) (_Bool)1);
        arr_10 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)20031))))) / (4676053342533860289LL)));
    }
    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) 
    {
        var_17 = ((/* implicit */long long int) ((18446744073709551598ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767)))));
        var_18 = ((/* implicit */long long int) (-((-(3221225473U)))));
    }
    for (unsigned char i_4 = 2; i_4 < 19; i_4 += 4) 
    {
        var_19 = ((/* implicit */unsigned short) 2484026058089688460ULL);
        arr_15 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) (short)11202)) >> (((((/* implicit */int) (unsigned short)19561)) - (19547)))))) + ((+(1073741822U)))));
    }
}
