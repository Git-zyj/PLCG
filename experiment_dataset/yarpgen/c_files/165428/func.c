/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165428
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_4 [(signed char)16] |= ((/* implicit */signed char) ((((((/* implicit */_Bool) -1572293893)) ? (arr_2 [8U]) : (arr_2 [22U]))) == (((/* implicit */unsigned int) ((/* implicit */int) ((short) (short)14336))))));
        var_10 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0])))), (((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0]))))));
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_2 [i_0]), (3523131458U)))) ? (min((((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) (signed char)-42)) : (((/* implicit */int) (unsigned char)9)))), (((int) (signed char)3)))) : (((/* implicit */int) max(((signed char)1), ((signed char)12))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_7 [i_0])))) ? (((/* implicit */int) (signed char)-11)) : (((/* implicit */int) (signed char)1)))))));
                    var_12 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((unsigned short) min((((/* implicit */unsigned int) -1599351562)), (arr_9 [i_2] [5] [i_0]))))), (min((max((((/* implicit */unsigned int) (short)-14323)), (arr_7 [14U]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4095850803U)) ? (((/* implicit */int) (_Bool)1)) : (arr_0 [i_0] [i_1]))))))));
                }
            } 
        } 
    }
    for (short i_3 = 0; i_3 < 21; i_3 += 3) 
    {
        var_13 = ((/* implicit */_Bool) (signed char)7);
        var_14 &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_10 [i_3])) : (((/* implicit */int) (signed char)12))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) (signed char)-91)), (1380396871)))) : (max((1446257255U), (((/* implicit */unsigned int) -767268109)))))) < (((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-91)) > (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) (signed char)-7)) : (((((/* implicit */_Bool) arr_11 [i_3])) ? (((/* implicit */int) (short)-24388)) : (((/* implicit */int) (signed char)-61)))))))));
        arr_13 [i_3] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) ((short) arr_7 [i_3]))))) ^ (max((-1201568007), (((/* implicit */int) (unsigned char)87))))));
        /* LoopNest 3 */
        for (signed char i_4 = 0; i_4 < 21; i_4 += 1) 
        {
            for (signed char i_5 = 2; i_5 < 20; i_5 += 3) 
            {
                for (unsigned int i_6 = 3; i_6 < 20; i_6 += 1) 
                {
                    {
                        arr_20 [i_5] [i_4] [i_5] [i_3] = ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_10 [i_5 - 1]))))) > (((unsigned long long int) arr_2 [i_5])));
                        var_15 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((((867226480) / (((/* implicit */int) (unsigned char)255)))), (max((((/* implicit */int) (signed char)-19)), (arr_0 [(short)2] [i_4])))))), (0ULL)));
                        var_16 &= ((/* implicit */unsigned long long int) arr_9 [(_Bool)1] [i_4] [i_5 - 1]);
                        var_17 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) arr_15 [i_3] [i_5 - 1]))) ? (arr_15 [20] [i_5 + 1]) : (arr_15 [10] [i_5 - 2])));
                    }
                } 
            } 
        } 
    }
    var_18 = ((/* implicit */short) var_0);
    var_19 -= ((/* implicit */short) max((var_2), (max((var_0), (((/* implicit */unsigned int) (signed char)-8))))));
}
