/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164922
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_7 [i_1] [i_1] [(_Bool)1] = ((/* implicit */int) (!(((/* implicit */_Bool) 2875784609U))));
                    var_10 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned char) arr_4 [i_2 + 2])))));
                    var_11 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_0 [i_2 - 2])))) != (((/* implicit */int) ((1419182687U) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-26))))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) 4168188154433238625LL))))) == (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)65535)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)63))))) < (((/* implicit */unsigned long long int) ((var_2) & (((/* implicit */long long int) var_3))))))))));
    var_13 = ((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) + (var_8))), (((/* implicit */unsigned long long int) 2875784609U))));
    var_14 = ((/* implicit */unsigned char) ((unsigned short) 1419182714U));
    var_15 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)6144)) >= (((/* implicit */int) (unsigned short)9011)))))) > (1419182658U)))) == (((/* implicit */int) var_4))));
}
