/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135836
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
    var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)-114)), ((unsigned short)44079)))) ? (((/* implicit */int) var_2)) : ((-(((/* implicit */int) var_1))))))) >= (min((((/* implicit */unsigned long long int) (unsigned char)12)), (max((((/* implicit */unsigned long long int) (_Bool)1)), (2145022456735544839ULL))))))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) /* same iter space */
    {
        var_12 = ((/* implicit */signed char) ((max((3121310729U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (signed char)124)) : (((/* implicit */int) (unsigned short)21456))))))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))));
        arr_3 [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) var_5))));
    }
    for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) /* same iter space */
    {
        var_13 = ((/* implicit */int) (unsigned short)44080);
        /* LoopNest 2 */
        for (unsigned char i_2 = 1; i_2 < 19; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_14 = (unsigned short)21457;
                    var_15 = ((/* implicit */long long int) arr_10 [i_3] [i_2]);
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((_Bool) ((((/* implicit */int) (unsigned short)31947)) + (((/* implicit */int) (unsigned char)242))))) ? ((~(((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1])))) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)102))))))))))));
        arr_14 [(_Bool)1] = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)21477)) ? (((/* implicit */int) (unsigned short)44081)) : ((+(-2147483630))))) > (-152854922)));
    }
    for (unsigned char i_4 = 0; i_4 < 20; i_4 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */short) ((((unsigned long long int) var_10)) << (((/* implicit */int) ((((/* implicit */int) max((var_2), (arr_1 [i_4])))) != (((/* implicit */int) arr_13 [i_4] [i_4] [i_4] [i_4])))))));
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) var_9))));
        var_19 = var_3;
    }
}
