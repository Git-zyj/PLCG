/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158950
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            var_15 = ((/* implicit */long long int) (~(((/* implicit */int) var_8))));
            arr_6 [4ULL] [5] [5] = -3719468194660377388LL;
        }
        for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            arr_9 [(_Bool)1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_12) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (((((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) | (((/* implicit */int) var_5)))) : ((~(((/* implicit */int) arr_5 [i_0] [10] [9U]))))));
            var_16 -= ((/* implicit */short) (-2147483647 - 1));
            var_17 = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned int) (unsigned short)511)), (((unsigned int) 32764ULL)))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)209)) && (((/* implicit */_Bool) (unsigned char)55)))) ? (((/* implicit */int) ((signed char) var_6))) : (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_2))))))))));
        }
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17289387788448948709ULL)) ? (min((((/* implicit */int) var_8)), (var_10))) : (((/* implicit */int) arr_8 [11ULL] [i_0] [12U]))));
        arr_10 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_3 [i_0] [4] [i_0]);
    }
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 3) 
    {
        var_19 = ((/* implicit */unsigned short) min((var_19), (var_6)));
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)55)) ? (((/* implicit */int) (unsigned char)201)) : (((/* implicit */int) (unsigned char)55))));
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_3])) ? (((/* implicit */int) (unsigned short)56245)) : (((/* implicit */int) arr_1 [i_3]))));
    }
    var_22 = ((/* implicit */int) var_0);
    var_23 = ((/* implicit */short) ((((/* implicit */int) min((max((((/* implicit */short) var_1)), (var_7))), (((/* implicit */short) (signed char)90))))) ^ (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) (signed char)-90))))) <= (((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7)))))))));
    var_24 = ((/* implicit */signed char) var_7);
}
