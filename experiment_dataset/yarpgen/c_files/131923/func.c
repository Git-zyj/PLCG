/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131923
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
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) min((var_7), (((/* implicit */unsigned char) (signed char)-87))))) : (((/* implicit */int) var_10))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        var_14 = arr_0 [2];
        arr_2 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1]))) : (var_2))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_2))))))))));
    }
    for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1])) && (((/* implicit */_Bool) arr_3 [i_1]))))) * (((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_1]))))) != ((-(var_5))))))));
        /* LoopSeq 1 */
        for (int i_2 = 1; i_2 < 11; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 1; i_3 < 8; i_3 += 1) 
            {
                for (unsigned short i_4 = 0; i_4 < 12; i_4 += 1) 
                {
                    {
                        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_9 [i_4] [i_1] [i_2 + 1] [i_1])) ? (((((/* implicit */int) (signed char)7)) - (((/* implicit */int) (signed char)-126)))) : (((/* implicit */int) (signed char)75))))))));
                        arr_15 [i_1] [i_2 + 1] [i_3 + 2] [i_1] = ((/* implicit */unsigned short) (_Bool)1);
                        var_16 = ((/* implicit */int) (+(min((min((var_11), (((/* implicit */long long int) 239811602U)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (var_12) : (((/* implicit */int) (unsigned char)9)))))))));
                        arr_16 [i_4] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (((+(var_2))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))), (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 6672166581076904405ULL)))))) / (max((((/* implicit */long long int) (unsigned short)16)), (arr_3 [i_1])))))));
                    }
                } 
            } 
            arr_17 [(signed char)6] |= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)246)) / (((/* implicit */int) (unsigned char)9))))) ? (((/* implicit */unsigned long long int) (-(arr_8 [i_1] [i_1] [(unsigned short)10])))) : (arr_12 [(unsigned short)10] [i_2 + 1] [i_2 + 1] [i_2] [i_2] [i_2 + 1]))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)246))) ^ (arr_12 [(_Bool)1] [i_1] [i_2 + 1] [i_2] [i_2 - 1] [i_2 - 1])))));
            /* LoopNest 2 */
            for (unsigned short i_5 = 1; i_5 < 9; i_5 += 2) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 1) 
                {
                    {
                        arr_23 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */unsigned int) (-((+(((/* implicit */int) ((var_2) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-119))))))))));
                        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (((-(((/* implicit */int) (signed char)127)))) < (((/* implicit */int) arr_20 [8LL] [i_2] [i_2] [i_5 - 1])))))));
                        arr_24 [i_1] [10U] [i_5 + 2] [i_6] = (unsigned char)80;
                    }
                } 
            } 
        }
    }
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (min((((/* implicit */unsigned long long int) (_Bool)1)), (11ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) -2058743776))))))) ? (((((/* implicit */_Bool) min((10905254290737988885ULL), (((/* implicit */unsigned long long int) var_11))))) ? (((((/* implicit */_Bool) (unsigned short)55173)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (-3796868113059900891LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -5973842241663357413LL)) ? (var_8) : (((/* implicit */int) (signed char)23))))))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
    var_19 = ((/* implicit */int) ((unsigned short) var_11));
    var_20 = ((/* implicit */long long int) var_5);
}
