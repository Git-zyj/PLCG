/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124600
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0])))) & (min((((-1724807341) & (((/* implicit */int) (unsigned short)63417)))), (((((/* implicit */int) arr_0 [(signed char)19])) >> (((((/* implicit */int) var_3)) + (91)))))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) min((((((/* implicit */int) arr_3 [i_1] [i_0])) & (((/* implicit */int) arr_3 [i_0] [i_1])))), (((/* implicit */int) var_1)))))));
            var_15 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_1 [i_0]))) ? (((/* implicit */int) min(((unsigned short)62537), (((/* implicit */unsigned short) (short)-32748))))) : (((/* implicit */int) arr_4 [i_0] [i_1]))))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) -3820547585049495913LL)) ? (((/* implicit */int) (signed char)-89)) : (((/* implicit */int) (short)32743)))) & (((/* implicit */int) arr_3 [i_0] [i_1]))))) : (((((/* implicit */long long int) (~(((/* implicit */int) (short)32743))))) | (min((((/* implicit */long long int) (_Bool)0)), (-9223372036854775798LL)))))));
            arr_5 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) var_2)) * (((((/* implicit */int) max(((short)8338), (((/* implicit */short) var_1))))) & (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)164)))))))));
            var_16 *= ((/* implicit */_Bool) min((((arr_0 [i_1]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (short)23130)))), (((/* implicit */int) arr_0 [i_0]))));
        }
    }
    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)49886)) + (((/* implicit */int) (short)17601)))))));
    /* LoopNest 3 */
    for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            for (unsigned char i_4 = 4; i_4 < 8; i_4 += 3) 
            {
                {
                    arr_14 [i_4] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(9223372036854775805LL)))) ? (((/* implicit */unsigned long long int) max((((int) arr_0 [(unsigned char)15])), (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2] [i_3] [i_3] [i_4])))))))) : ((+((-(arr_11 [i_2])))))));
                    arr_15 [i_2] [i_3] [i_2] = ((/* implicit */short) arr_11 [i_2]);
                    arr_16 [i_3] [8LL] [i_4] [i_3] &= ((/* implicit */unsigned short) var_3);
                }
            } 
        } 
    } 
}
