/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155034
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
    var_12 = min((((/* implicit */unsigned long long int) (unsigned short)65534)), (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)114))))) ? (((unsigned long long int) var_9)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */long long int) min((8191U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)1984)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)-78)))))))), (-4266733657996050533LL)));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (~((-(((/* implicit */int) (unsigned short)64))))));
                arr_8 [i_0] = ((/* implicit */long long int) 18446744073709551596ULL);
            }
        } 
    } 
}
