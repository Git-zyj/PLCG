/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127583
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
    for (unsigned int i_0 = 4; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 4; i_1 < 16; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [4] [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_7 [i_2 + 1] [(unsigned short)15] [i_2]) ^ (arr_7 [i_2 - 3] [i_2] [i_2 + 1])))) || (((/* implicit */_Bool) (+(arr_7 [i_2 - 1] [i_2 + 1] [i_2]))))));
                    var_12 = ((/* implicit */short) min((var_3), (((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1] [i_0]))) * (var_3)))));
                    var_13 ^= ((/* implicit */signed char) (+(arr_6 [i_0] [i_0 - 1] [18U] [16U])));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(2198823095U)))) && (((/* implicit */_Bool) (((~(((/* implicit */int) (short)-32250)))) ^ ((+(((/* implicit */int) (short)(-32767 - 1))))))))));
    var_15 |= ((/* implicit */long long int) (-(((/* implicit */int) var_0))));
    var_16 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-57))) & (var_3)))) ^ ((-9223372036854775807LL - 1LL))));
    /* LoopSeq 1 */
    for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 1) 
    {
        /* LoopSeq 3 */
        for (long long int i_4 = 2; i_4 < 6; i_4 += 3) 
        {
            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) (unsigned char)241))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_3 - 1] [i_3])) % (((/* implicit */int) arr_3 [i_3 - 1] [i_3 + 1])))))));
            /* LoopNest 2 */
            for (unsigned char i_5 = 3; i_5 < 7; i_5 += 3) 
            {
                for (signed char i_6 = 0; i_6 < 10; i_6 += 4) 
                {
                    {
                        var_18 = ((/* implicit */short) var_8);
                        var_19 ^= var_9;
                    }
                } 
            } 
            var_20 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)22)) ? (-2222569886385452844LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-4)))))) ? (max((var_10), (((/* implicit */long long int) arr_2 [i_4 + 4] [i_3 - 1])))) : (((/* implicit */long long int) (+(arr_2 [i_4 + 3] [i_3 - 1]))))));
        }
        for (long long int i_7 = 0; i_7 < 10; i_7 += 2) /* same iter space */
        {
            arr_22 [i_7] [i_3 + 1] = ((/* implicit */signed char) ((max((((/* implicit */long long int) 2080454175U)), (3371942857892480631LL))) / (((((/* implicit */_Bool) ((((/* implicit */int) (short)-11020)) % (((/* implicit */int) (signed char)9))))) ? ((+((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) max((arr_17 [i_3] [i_3] [i_7] [i_7]), (((/* implicit */int) arr_21 [i_7])))))))));
            var_21 ^= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_3]))) % (605291269U)))) > ((~(var_8)))))) != (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-93)) && (((/* implicit */_Bool) (signed char)-25)))))));
        }
        for (long long int i_8 = 0; i_8 < 10; i_8 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (signed char i_9 = 2; i_9 < 9; i_9 += 4) 
            {
                for (int i_10 = 0; i_10 < 10; i_10 += 2) 
                {
                    for (long long int i_11 = 0; i_11 < 10; i_11 += 4) 
                    {
                        {
                            var_22 *= ((/* implicit */short) (+((((-(2087968034U))) + ((+(arr_2 [i_3] [i_3])))))));
                            arr_31 [i_11] [i_10] [i_8] = ((/* implicit */_Bool) max((arr_19 [1LL] [i_8] [i_9] [i_10] [i_11]), ((-(1475838853)))));
                        }
                    } 
                } 
            } 
            arr_32 [i_3 + 1] [i_3 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_3 - 1] [i_3] [i_3 + 1] [i_3 + 1])) / (((/* implicit */int) arr_15 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 + 1]))))) ? (((/* implicit */long long int) ((var_2) / (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_3 - 1] [i_8] [i_3] [i_8] [i_8])))))) : (max((min((((/* implicit */long long int) (-2147483647 - 1))), (-7560471920095128756LL))), (((/* implicit */long long int) ((var_8) > (var_1))))))));
            arr_33 [i_3 - 1] [i_8] = ((/* implicit */unsigned char) max((((/* implicit */long long int) min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_30 [i_3] [i_3] [i_3] [i_3]))))), (66584576U)))), ((-(min((arr_11 [i_3 + 1]), (((/* implicit */long long int) arr_30 [i_8] [i_8] [i_8] [i_8]))))))));
        }
        arr_34 [i_3] [i_3] = ((/* implicit */signed char) min((((/* implicit */unsigned char) (signed char)-4)), ((unsigned char)230)));
        arr_35 [i_3] = ((/* implicit */signed char) (+(min(((-(((/* implicit */int) var_0)))), (max((1804478367), (1502799208)))))));
        arr_36 [i_3] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 3240780054261999154LL))))), (7850178969032846318ULL)));
    }
}
