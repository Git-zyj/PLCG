/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155287
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
    var_16 = ((/* implicit */unsigned long long int) var_8);
    var_17 = ((/* implicit */unsigned long long int) var_0);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 6; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) 536608768)) % (34359738368ULL)))))) ? (max((min((arr_0 [i_0]), (((/* implicit */unsigned long long int) 219561100)))), (((arr_0 [i_0]) / (((/* implicit */unsigned long long int) var_7)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_1 [i_0])))) <= (((((/* implicit */_Bool) 576460748008456192ULL)) ? (576460748008456192ULL) : (((/* implicit */unsigned long long int) 452138795))))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 3; i_2 < 9; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */int) min((var_19), (((((/* implicit */_Bool) ((arr_1 [i_0]) % (arr_4 [i_0] [i_2])))) ? (((((/* implicit */_Bool) arr_1 [i_3])) ? (arr_4 [i_0] [i_1 + 4]) : (arr_4 [i_2 - 1] [i_2]))) : (((((/* implicit */_Bool) arr_1 [i_1 + 3])) ? (arr_4 [i_0] [i_0]) : (arr_4 [i_1 + 2] [i_3])))))));
                            var_20 |= ((/* implicit */unsigned char) ((int) var_13));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_12)) : (var_14));
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 1; i_4 < 22; i_4 += 2) 
    {
        for (int i_5 = 0; i_5 < 24; i_5 += 4) 
        {
            {
                var_22 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) -452138815)) != (13835058055282163712ULL)));
                /* LoopSeq 1 */
                for (int i_6 = 0; i_6 < 24; i_6 += 3) 
                {
                    var_23 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_8)))) % (((/* implicit */int) (!(((((/* implicit */int) arr_15 [i_4] [i_5] [i_4])) == (var_11))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_7 = 1; i_7 < 20; i_7 += 1) 
                    {
                        var_24 = ((((/* implicit */_Bool) min((((/* implicit */int) max(((unsigned char)64), ((unsigned char)224)))), (arr_17 [i_7] [16ULL])))) ? (452138795) : (((((/* implicit */_Bool) (-(13835058055282163712ULL)))) ? (((/* implicit */int) (unsigned char)64)) : (((/* implicit */int) (unsigned char)61)))));
                        var_25 += ((/* implicit */unsigned long long int) var_8);
                        var_26 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) ((int) arr_16 [i_7] [i_5] [i_5]))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_13 [i_5])) : (var_11))) : (((/* implicit */int) arr_18 [i_4 - 1])))) : (arr_20 [14ULL] [i_5] [i_5] [i_7])));
                    }
                }
                arr_23 [i_4] [i_5] [i_5] = ((/* implicit */int) ((2046794926193884733ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)74)) ? (var_15) : (33546240))))))))));
                var_27 = ((arr_12 [i_5]) & (var_14));
            }
        } 
    } 
}
