/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156491
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_14 = ((/* implicit */signed char) (-(((/* implicit */int) arr_1 [i_0]))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((arr_0 [i_0]) < (arr_0 [i_0])));
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) & (var_10)));
    }
    for (int i_1 = 3; i_1 < 15; i_1 += 3) 
    {
        var_16 = ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)1075)), (5430861918792469404LL)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_7 [6U]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1])))))) ? (((/* implicit */int) ((arr_5 [(_Bool)1] [i_1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) : (((/* implicit */int) ((short) arr_7 [i_1]))))) : ((~(((((/* implicit */int) var_1)) >> (((((/* implicit */int) arr_6 [i_1])) + (37))))))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
            {
                {
                    var_17 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)27270)) ? (arr_8 [i_1]) : (((/* implicit */int) var_9))))))) ? ((((~(((/* implicit */int) arr_4 [i_1 - 3])))) | (min((((/* implicit */int) var_7)), (arr_8 [i_3]))))) : (arr_11 [i_3] [i_2] [(unsigned char)9] [9])));
                    arr_14 [i_3] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((min(((-(((/* implicit */int) arr_6 [i_2])))), (arr_11 [9LL] [i_1] [i_2] [i_3]))) >> (((((((/* implicit */int) ((_Bool) 10867052652273747347ULL))) * ((+(((/* implicit */int) arr_10 [i_1 - 2] [i_1 - 2] [i_1])))))) - (32591)))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_4 = 0; i_4 < 17; i_4 += 4) 
                    {
                        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [(unsigned short)9] [i_2] [i_1 - 2])) && (((/* implicit */_Bool) arr_5 [i_1 - 3] [i_2]))));
                        arr_17 [i_1] [i_2] [i_3] [i_2] &= ((((/* implicit */_Bool) arr_11 [i_1 - 3] [i_1] [i_1] [i_1 - 2])) ? (arr_15 [i_1] [i_1]) : (((/* implicit */long long int) arr_11 [i_1] [i_1] [i_1] [i_1 + 2])));
                    }
                }
            } 
        } 
    }
    var_19 = ((/* implicit */unsigned short) min((max((min((((/* implicit */long long int) 3885719872U)), (var_2))), (((/* implicit */long long int) ((var_8) >> (((var_5) - (2704717416407514963LL)))))))), ((+(var_5)))));
}
