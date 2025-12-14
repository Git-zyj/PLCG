/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139631
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
    for (short i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        var_11 = ((/* implicit */long long int) ((arr_1 [i_0]) < (((arr_0 [i_0 - 1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_10))))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((long long int) arr_0 [i_0 + 2]));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) 4909989695589860368LL);
            arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!((_Bool)0))))) >= ((+(var_7)))));
            var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)8176))))))))));
        }
        /* LoopSeq 3 */
        for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            arr_9 [i_0 + 4] [i_2] = ((((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_0 + 2] [i_0 + 4] [i_0 + 2]))) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)225), ((unsigned char)225))))) : ((+(arr_4 [i_0 + 4] [i_0 + 1] [i_0 + 4]))));
            arr_10 [i_2] = ((/* implicit */signed char) ((short) ((unsigned int) ((((/* implicit */int) (unsigned short)2724)) & (((/* implicit */int) (unsigned short)38665))))));
            var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)63034)) ? (((/* implicit */int) (unsigned char)19)) : (((/* implicit */int) (unsigned char)252)))))));
        }
        /* vectorizable */
        for (short i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            var_14 = ((/* implicit */short) ((((((/* implicit */_Bool) var_4)) ? (arr_7 [i_0]) : (((/* implicit */int) (unsigned short)65223)))) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
            var_15 = ((/* implicit */_Bool) arr_11 [i_3] [i_0 + 1]);
            /* LoopSeq 2 */
            for (signed char i_4 = 1; i_4 < 19; i_4 += 3) 
            {
                arr_17 [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_4 [2LL] [2LL] [i_4]) : (arr_11 [i_0 + 2] [i_4])))) ? (var_6) : (((/* implicit */int) ((arr_0 [i_3]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_11 [i_3] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (1043397685U))) == (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))))))));
            }
            for (unsigned char i_5 = 3; i_5 < 19; i_5 += 1) 
            {
                var_17 = ((/* implicit */short) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4))))));
                /* LoopSeq 1 */
                for (long long int i_6 = 2; i_6 < 18; i_6 += 3) 
                {
                    var_18 = ((/* implicit */unsigned short) ((short) (unsigned short)26874));
                    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) var_9))));
                    arr_23 [i_3] [i_3] = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_7)) : (arr_0 [i_6]))));
                    arr_24 [i_6] [i_3] [i_3] [(unsigned short)18] = ((/* implicit */long long int) var_0);
                    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_5 + 3] [i_5 + 3] [i_3] [i_6 + 3])) ? (arr_20 [i_5 - 3] [i_5 - 3] [i_3] [i_6 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)33)))));
                }
                /* LoopSeq 1 */
                for (short i_7 = 0; i_7 < 22; i_7 += 3) 
                {
                    arr_28 [i_0] [i_3] = ((/* implicit */unsigned short) var_10);
                    var_21 = ((((/* implicit */long long int) arr_7 [i_0 + 1])) - (var_7));
                    var_22 = ((/* implicit */long long int) (-(-1)));
                }
                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) var_2))));
            }
            var_24 = ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0 - 1]))) / (var_10));
        }
        for (short i_8 = 0; i_8 < 22; i_8 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 3) 
            {
                for (long long int i_10 = 1; i_10 < 21; i_10 += 3) 
                {
                    {
                        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) max((min((min((var_8), (1409505915246319769LL))), (((/* implicit */long long int) min(((short)32760), ((short)14243)))))), (((/* implicit */long long int) (_Bool)1)))))));
                        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) min((((short) (short)-30389)), (((/* implicit */short) arr_22 [i_0] [i_0 + 1] [i_10 - 1] [0])))))) + (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)57)) - (((/* implicit */int) arr_22 [(unsigned short)14] [4LL] [i_9] [(short)2]))))) ? (arr_26 [i_10 + 1] [i_10] [11LL] [i_10 - 1] [1LL] [11LL]) : (((((/* implicit */_Bool) arr_29 [(signed char)20])) ? (var_8) : (var_10))))))))));
                        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (signed char)-78)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_15 [i_10])))))) ? (((/* implicit */int) var_3)) : (((((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_27 [i_10]))))) * (((/* implicit */int) ((2305843009213693952LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18039)))))))))))));
                    }
                } 
            } 
            var_28 = ((/* implicit */unsigned short) (short)18647);
            arr_36 [i_8] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15614))) : (6260388971414640374LL)))), (var_2)));
        }
        var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) min((((unsigned long long int) (+(((/* implicit */int) (short)-18639))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))))))))));
    }
    var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((var_6) | (((/* implicit */int) min((var_3), (((/* implicit */short) var_5))))))))));
    var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) | (((((((/* implicit */_Bool) 2045591218)) ? (((/* implicit */int) (short)18637)) : (((/* implicit */int) (_Bool)1)))) | (((/* implicit */int) var_1))))));
    var_32 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_7)) : (697029874073704234ULL)));
    var_33 = ((/* implicit */long long int) (+(-362109766)));
}
