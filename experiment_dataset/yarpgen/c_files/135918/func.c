/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135918
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_10 = ((/* implicit */unsigned short) (signed char)3);
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) /* same iter space */
        {
            arr_5 [i_1] [i_1] = ((/* implicit */unsigned short) max(((signed char)-4), ((signed char)-4)));
            arr_6 [i_1] [i_1] = ((/* implicit */short) (((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 437961668972575171LL)), (14ULL)))))) ? (min((777893996U), (((/* implicit */unsigned int) (signed char)3)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))))));
            arr_7 [8LL] [0LL] &= ((((((/* implicit */_Bool) (~(697640613)))) || (((/* implicit */_Bool) min((6LL), (((/* implicit */long long int) (_Bool)1))))))) ? (min((min((((/* implicit */long long int) (signed char)3)), (4815053083282992196LL))), (((/* implicit */long long int) (unsigned short)4573)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 4815053083282992196LL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-16)))))))));
        }
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 12; i_2 += 3) /* same iter space */
        {
            var_11 = (((+(17360921105027757792ULL))) >> (((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (9037846485447703341ULL))));
            var_12 = ((/* implicit */_Bool) (+(689070600)));
        }
    }
    var_13 = ((/* implicit */unsigned short) ((((-689070613) + (2147483647))) << (((5871854187666935143LL) - (5871854187666935143LL)))));
    var_14 = ((/* implicit */unsigned char) 2134262383U);
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1023)) ? (min((var_5), (var_5))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_3)), (max((4815053083282992196LL), (5871854187666935143LL))))))));
    var_16 = ((/* implicit */signed char) max((max((5590293948194697363LL), (((/* implicit */long long int) (unsigned char)1)))), (((/* implicit */long long int) (unsigned short)56692))));
}
