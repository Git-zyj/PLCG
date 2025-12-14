/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157368
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
    var_14 -= ((/* implicit */long long int) 4819310051034363541ULL);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 3; i_2 < 23; i_2 += 4) 
                {
                    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) arr_4 [i_0] [i_1] [i_0] [i_0]))) && (((/* implicit */_Bool) arr_2 [i_0] [i_2 - 1]))));
                    var_16 = ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) + (var_3));
                    arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_2))));
                    var_17 |= ((/* implicit */short) ((arr_2 [i_2] [(short)12]) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_2]))))))));
                    var_18 = ((/* implicit */unsigned char) arr_2 [i_2 - 1] [i_0]);
                }
                arr_7 [i_1] = ((/* implicit */long long int) max((min((arr_5 [i_1] [i_1] [i_1] [i_0]), (((/* implicit */unsigned long long int) min((var_6), (((/* implicit */long long int) arr_4 [i_0] [i_1] [12LL] [(unsigned char)6]))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1192437314)) ? (15968266465316062972ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)31)))))) ? (8876122410100000933ULL) : (((/* implicit */unsigned long long int) (~(var_3))))))));
                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) arr_3 [i_0] [i_0])), (arr_4 [(short)3] [i_1] [i_0] [i_0])))) ? (arr_2 [i_1] [i_0]) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) -1192437314)) : (var_3)))))) ? (((((/* implicit */unsigned long long int) var_10)) % (min((arr_5 [i_1] [i_1] [i_1] [21ULL]), (((/* implicit */unsigned long long int) var_7)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) var_7)) : (13627434022675188075ULL))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) var_1);
    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((((9570621663609550683ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) / (((/* implicit */unsigned long long int) ((var_0) - (var_5)))))) >> ((((-(((((/* implicit */_Bool) var_6)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) - (8470817737365900113ULL))))))));
}
