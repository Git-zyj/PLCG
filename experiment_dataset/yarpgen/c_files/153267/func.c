/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153267
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
    var_17 = ((/* implicit */short) (-((+(((((/* implicit */_Bool) (signed char)-62)) ? (((/* implicit */unsigned long long int) var_0)) : (var_6)))))));
    var_18 ^= ((/* implicit */unsigned short) var_4);
    var_19 = ((/* implicit */unsigned char) min((var_19), (var_16)));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        var_20 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_5)) ? (-2439526808943150508LL) : (2439526808943150514LL))), (((/* implicit */long long int) max((arr_0 [16LL]), (((/* implicit */unsigned int) arr_1 [(_Bool)1]))))))))));
        var_21 ^= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-72)) : (((/* implicit */int) var_5))))) ? ((-(((/* implicit */int) (signed char)-124)))) : (((/* implicit */int) (signed char)-72))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned short i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    for (signed char i_4 = 3; i_4 < 19; i_4 += 2) 
                    {
                        {
                            arr_11 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_0 [i_0])))) * (((((/* implicit */_Bool) 2439526808943150507LL)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0 - 1] [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0]))))))) : (((/* implicit */unsigned int) min((2), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (signed char)-124)) : (arr_8 [i_0] [i_4]))))))));
                            arr_12 [i_3] [i_3] [(unsigned short)8] [i_3] &= ((((/* implicit */int) arr_7 [i_3] [i_3] [i_2] [i_3] [i_2])) != (((/* implicit */int) (((!(((/* implicit */_Bool) (short)-3780)))) || (((/* implicit */_Bool) max((var_8), (((/* implicit */short) var_1)))))))));
                        }
                    } 
                } 
            } 
            arr_13 [i_0] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_6 [i_0 + 1] [0] [i_0])))) ? (min((((/* implicit */long long int) var_10)), (8885221733797023721LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (signed char)-33))))))) ? (((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 + 1]))) : (arr_0 [i_0]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) var_0))) ? (((((/* implicit */_Bool) arr_7 [i_0 - 1] [(unsigned short)1] [i_0] [i_0] [i_1])) ? (-202640254) : (((/* implicit */int) arr_5 [12ULL] [(_Bool)1] [i_0])))) : (((/* implicit */int) ((signed char) arr_6 [i_0] [i_1] [i_0]))))))));
            var_22 = ((((/* implicit */_Bool) 1569869959U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (short)10052)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)0))))))) : (((((/* implicit */_Bool) (signed char)-124)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_0] [(unsigned short)5] [i_0] [i_0])))))) : (arr_6 [i_0 - 1] [i_0] [i_0]))));
        }
        arr_14 [i_0] = ((/* implicit */int) arr_2 [i_0]);
        arr_15 [i_0] = ((/* implicit */_Bool) 1512765496U);
    }
    var_23 = var_12;
}
