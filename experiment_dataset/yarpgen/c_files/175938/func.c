/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175938
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
    var_20 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 9107878429138286425ULL)) ? (min((((((/* implicit */_Bool) 213415192253704484ULL)) ? (5738627170246065586ULL) : (12708116903463486017ULL))), (8526543718302908979ULL))) : (18446744073709551599ULL)));
    var_21 = ((/* implicit */unsigned long long int) var_13);
    var_22 = ((/* implicit */signed char) (unsigned char)183);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_2 [(unsigned short)2] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */long long int) 3363935333U)), (36028796951855104LL)));
        var_23 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) (unsigned short)12288)) | (((/* implicit */int) arr_0 [(_Bool)1] [i_0])))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 3; i_1 < 14; i_1 += 4) 
    {
        /* LoopSeq 2 */
        for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            var_24 = ((/* implicit */long long int) ((((/* implicit */int) var_14)) == (((/* implicit */int) (unsigned short)12276))));
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 + 2] [i_1 - 3]))) ^ (((var_6) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))))));
        }
        for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 3) 
        {
            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) arr_3 [i_1 - 2] [i_1 - 3]))));
            var_27 = ((/* implicit */signed char) 18419071958783472150ULL);
        }
        var_28 = ((/* implicit */signed char) (unsigned char)162);
    }
}
