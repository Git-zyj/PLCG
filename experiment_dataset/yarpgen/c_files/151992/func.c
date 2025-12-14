/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151992
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
    var_11 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)62715)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned long long int) var_6)), (var_9)))))) : (3060714760125283948ULL)));
    var_12 &= ((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) var_2)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_7))))) | (((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */int) var_5)) <= (((/* implicit */int) var_6))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_5 [i_0] = arr_3 [i_0] [i_1];
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned int) (+((~(((/* implicit */int) arr_1 [i_0] [i_0]))))));
                            var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_5)), (3356653630691366297LL)))) ? (((/* implicit */long long int) ((arr_1 [i_0] [i_0]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)7))))) : (var_0)));
                            var_15 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)14089)) && (((/* implicit */_Bool) 3356653630691366297LL)))) ? (((((/* implicit */_Bool) 473078431589918837ULL)) ? (((unsigned long long int) -3356653630691366297LL)) : (((/* implicit */unsigned long long int) 3181929072U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [(_Bool)1] [i_2] [i_2] [i_2])))));
                            arr_10 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */signed char) max((var_2), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)-12)) && (((/* implicit */_Bool) (signed char)-40)))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned int i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    var_16 = ((/* implicit */unsigned long long int) min((((/* implicit */int) min((arr_8 [i_0] [11U] [i_4] [i_0] [i_4]), (((/* implicit */short) ((var_0) >= (((/* implicit */long long int) ((/* implicit */int) var_5))))))))), ((-(((/* implicit */int) min((((/* implicit */unsigned short) var_3)), ((unsigned short)62715))))))));
                    arr_13 [14LL] [i_0] [14LL] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])) ^ (max((var_4), (((/* implicit */unsigned long long int) arr_0 [i_0]))))));
                    arr_14 [i_0] [i_1] [13LL] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_3) ? (min((((/* implicit */unsigned int) var_8)), (arr_3 [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_4] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_6 [i_0] [i_0])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_8)))) : (arr_7 [i_1])));
                    arr_15 [i_0] [i_1] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_4] [11LL])) ? (((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((unsigned long long int) (_Bool)1)))) : (((3060714760125283973ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                    var_17 = (i_0 % 2 == 0) ? (((/* implicit */short) (+(((((((/* implicit */int) var_8)) << (((/* implicit */int) var_10)))) >> (((arr_3 [i_0] [i_1]) - (2370586242U)))))))) : (((/* implicit */short) (+(((((((/* implicit */int) var_8)) << (((/* implicit */int) var_10)))) >> (((((arr_3 [i_0] [i_1]) - (2370586242U))) - (4102910202U))))))));
                }
                var_18 = ((/* implicit */unsigned short) (+(((/* implicit */int) min((((/* implicit */short) arr_9 [i_0] [i_1] [i_0] [i_0])), (arr_8 [i_0] [i_0] [i_0] [i_1] [i_0]))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_1))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((signed char) var_7)))))))));
}
