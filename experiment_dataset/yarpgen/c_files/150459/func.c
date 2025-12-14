/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150459
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            var_15 ^= ((/* implicit */long long int) (short)-1);
            arr_4 [i_0] [i_1] [i_0] = arr_2 [i_0];
        }
        for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            arr_9 [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_0 [i_0]))))));
            var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)6)), ((unsigned short)52086)))) - ((+(((/* implicit */int) arr_7 [i_0] [i_0]))))));
        }
        for (short i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            var_17 = ((/* implicit */unsigned char) ((short) ((((((/* implicit */_Bool) arr_11 [i_0])) ? (((/* implicit */int) (short)9040)) : (((/* implicit */int) var_14)))) >> (((/* implicit */int) ((1627957691U) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
            arr_13 [i_0] [i_3] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((arr_8 [0ULL] [i_3]) ? (((/* implicit */int) arr_8 [i_3] [i_3])) : (((/* implicit */int) (short)25568))))) && (arr_0 [i_0]))), ((_Bool)1)));
        }
        /* LoopNest 3 */
        for (short i_4 = 0; i_4 < 23; i_4 += 1) 
        {
            for (unsigned int i_5 = 0; i_5 < 23; i_5 += 3) 
            {
                for (short i_6 = 0; i_6 < 23; i_6 += 3) 
                {
                    {
                        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (-((-(((/* implicit */int) arr_8 [i_0] [i_4]))))))) ? (arr_20 [i_0] [15U] [i_5] [(signed char)21] [(signed char)21]) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_5] [i_6]))) | (8588886016ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_14), ((unsigned short)12288))))) : (((4111786030560632334LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_0])))))))));
                        /* LoopSeq 3 */
                        for (unsigned short i_7 = 0; i_7 < 23; i_7 += 4) /* same iter space */
                        {
                            arr_24 [i_0] [i_0] [12LL] [i_0] [(unsigned short)6] [i_0] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_20 [i_7] [i_7] [i_7] [i_7] [i_7])))) ? (((/* implicit */int) (signed char)-30)) : ((~(((/* implicit */int) (_Bool)1))))));
                            arr_25 [i_0] [i_4] [(_Bool)1] [(unsigned short)6] [i_4] [i_4] = ((/* implicit */unsigned int) (((_Bool)1) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_7) : (((/* implicit */int) var_10))))) ? (arr_18 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) var_3)))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0]))) == (arr_20 [i_0] [i_4] [(short)18] [i_6] [i_7])))))));
                            var_19 = min((((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)33771)) || (((/* implicit */_Bool) (unsigned char)27))))), ((unsigned short)43346));
                        }
                        for (unsigned short i_8 = 0; i_8 < 23; i_8 += 4) /* same iter space */
                        {
                            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-2252)) ? (((arr_15 [i_0]) ? (arr_18 [i_0] [(unsigned short)4] [i_5] [i_6]) : (max((((/* implicit */long long int) arr_16 [i_5] [i_0])), (var_13))))) : (((/* implicit */long long int) min(((((_Bool)1) ? (2033936888) : (((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0])))), (arr_28 [i_0] [i_0] [i_5] [i_0] [i_0]))))));
                            arr_29 [i_0] [i_8] [i_0] [i_6] [(signed char)4] = ((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) var_4))))) / (((long long int) min((var_1), (((/* implicit */unsigned short) (short)31743)))))));
                        }
                        for (unsigned short i_9 = 0; i_9 < 23; i_9 += 4) /* same iter space */
                        {
                            arr_32 [i_0] [i_0] [i_0] [i_0] [i_9] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) 4648194207237210640LL))));
                            arr_33 [i_0] [(_Bool)1] [i_5] [i_0] [i_9] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (+(((/* implicit */int) (signed char)-15))))), (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0])));
                            arr_34 [i_0] [i_0] [i_5] [i_6] [5] [i_9] [5] = ((min((((/* implicit */unsigned int) ((int) (_Bool)1))), (((unsigned int) (_Bool)1)))) != (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-9035))))));
                            var_21 *= ((/* implicit */unsigned int) (_Bool)1);
                        }
                    }
                } 
            } 
        } 
        var_22 *= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((var_13) + (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0]))))) - ((-(var_8)))))), (((arr_8 [i_0] [i_0]) ? (((((/* implicit */_Bool) var_14)) ? (2049901313693151063ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15869))))) : (((unsigned long long int) arr_19 [(_Bool)1] [(unsigned short)12] [(_Bool)1]))))));
    }
    var_23 = ((((/* implicit */int) (unsigned short)16586)) >= (((/* implicit */int) (_Bool)1)));
}
