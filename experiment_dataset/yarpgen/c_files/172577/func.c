/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172577
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
    var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 4294967283U)) ? (((/* implicit */int) (unsigned char)54)) : (((/* implicit */int) (unsigned char)201))))) : (((long long int) 4294967286U))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (max((((/* implicit */long long int) ((signed char) 3447289729U))), (((long long int) (_Bool)1)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 7; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 9; i_2 += 2) 
            {
                {
                    arr_7 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) min((-8161252878550772392LL), (-9223372036854775787LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (short)-23791)))) : (min((4U), (2224769695U)))))), (min((min((((/* implicit */long long int) 4294967293U)), (2934108349788859126LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (_Bool)1)) : (-427363499))))))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (short)23798);
                    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) 18446744073709551612ULL)) ? (((/* implicit */int) ((unsigned char) (~(4294967286U))))) : ((~(((((/* implicit */_Bool) (unsigned char)201)) ? (((/* implicit */int) (unsigned short)57572)) : (((/* implicit */int) (short)-23778)))))))))));
                    arr_9 [i_1] [i_0] = ((int) max((-8161252878550772405LL), (((/* implicit */long long int) (unsigned char)192))));
                }
            } 
        } 
    } 
}
