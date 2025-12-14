/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118145
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
    var_13 = ((/* implicit */int) 137438953471ULL);
    var_14 = 6697002734345388601LL;
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned short) (-((-(((/* implicit */int) (unsigned char)194))))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) (-(72057593903710208ULL))))) && (((/* implicit */_Bool) max((min((((/* implicit */long long int) (unsigned char)178)), (var_12))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)38884))))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_0] [(short)2] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) 3530627996U)), (var_5)))) ? (arr_11 [i_2] [i_2] [5ULL] [i_3] [i_2]) : (((/* implicit */long long int) min((-1), (((/* implicit */int) (signed char)-86)))))))) ? (max((((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (18374686479805841407ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26651))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_4] [i_2] [i_1])) ? (((/* implicit */int) (unsigned short)16152)) : (((/* implicit */int) (short)-21521))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21521)))));
                                arr_13 [i_4] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */long long int) (short)21520);
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */short) (signed char)41);
                    var_17 = ((/* implicit */unsigned char) 6697002734345388601LL);
                }
            } 
        } 
    }
    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 1) 
    {
        arr_17 [i_5] [i_5] = ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 1647900614751846066LL)) ? (((/* implicit */unsigned long long int) -1647900614751846066LL)) : (18446743936270598133ULL)))))));
        arr_18 [i_5] = ((/* implicit */long long int) ((short) (!(((/* implicit */_Bool) arr_10 [i_5] [i_5] [(signed char)19] [(signed char)19] [i_5] [i_5])))));
    }
    /* vectorizable */
    for (long long int i_6 = 0; i_6 < 25; i_6 += 4) 
    {
        arr_22 [i_6] [i_6] = ((/* implicit */short) (+(((/* implicit */int) (short)511))));
        arr_23 [i_6] = ((/* implicit */unsigned char) arr_21 [(short)5] [(short)5]);
        arr_24 [i_6] [i_6] = ((/* implicit */short) (+(18374686479805841390ULL)));
        /* LoopSeq 2 */
        for (long long int i_7 = 4; i_7 < 21; i_7 += 1) 
        {
            arr_27 [i_6] [i_7 - 4] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_5)) : (18374686479805841395ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38884)))));
            arr_28 [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) (_Bool)0);
        }
        for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 1) 
        {
            var_18 = ((/* implicit */unsigned short) (-((+(1647900614751846065LL)))));
            arr_31 [i_8] = ((/* implicit */int) (-((+(18446743936270598142ULL)))));
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 72057593903710206ULL)) ? (((/* implicit */int) arr_29 [i_6] [i_6] [i_8])) : (((/* implicit */int) arr_26 [i_6] [i_8]))));
        }
    }
}
