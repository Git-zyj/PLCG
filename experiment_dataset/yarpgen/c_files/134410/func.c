/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134410
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
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_4)))) ? (((/* implicit */long long int) (~(arr_1 [i_0])))) : (min((7LL), (((/* implicit */long long int) arr_1 [i_0]))))));
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) (signed char)-112)) ? (((/* implicit */int) (unsigned char)116)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [3LL]))))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_7 [i_2 - 1] [i_2 - 1] [i_1] [(unsigned short)6] = ((/* implicit */long long int) max((((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) 627502539881758258ULL))))))), ((-(1750205738U)))));
                    var_17 = (+(((/* implicit */int) arr_6 [i_2] [i_1] [(short)18] [i_0])));
                }
            } 
        } 
        arr_8 [5LL] = ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [(unsigned short)11])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))) : (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (signed char)-54)))));
        arr_9 [i_0] [i_0] = ((/* implicit */short) ((max((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)195)) : (((/* implicit */int) (unsigned short)21542))))), (min((((/* implicit */long long int) (unsigned char)195)), (var_13))))) ^ (((long long int) var_12))));
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 14; i_3 += 3) 
    {
        var_18 += ((/* implicit */unsigned char) (-(arr_0 [i_3] [i_3])));
        var_19 |= var_2;
        var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) 2544761558U))));
    }
    /* LoopSeq 1 */
    for (int i_4 = 0; i_4 < 15; i_4 += 3) 
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 15; i_5 += 4) 
        {
            for (unsigned int i_6 = 0; i_6 < 15; i_6 += 3) 
            {
                for (long long int i_7 = 3; i_7 < 14; i_7 += 2) 
                {
                    {
                        arr_22 [i_7] [i_5] = ((/* implicit */short) ((min((-1427710746), (((/* implicit */int) var_5)))) % ((+(arr_17 [i_6] [7] [i_7 - 2])))));
                        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (((!((!(((/* implicit */_Bool) var_7)))))) || ((!(((/* implicit */_Bool) arr_5 [i_6] [i_7 - 1] [i_7] [i_7 - 2])))))))));
                    }
                } 
            } 
        } 
        var_22 += ((/* implicit */long long int) (((~(((((/* implicit */_Bool) 5634456902155602933LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-23359)))))) & (((((/* implicit */int) var_15)) / (((/* implicit */int) (unsigned short)21541))))));
        var_23 += ((/* implicit */short) (+(min((var_7), (((/* implicit */long long int) 4081330494U))))));
    }
    /* LoopNest 3 */
    for (signed char i_8 = 0; i_8 < 15; i_8 += 4) 
    {
        for (int i_9 = 0; i_9 < 15; i_9 += 2) 
        {
            for (short i_10 = 2; i_10 < 13; i_10 += 1) 
            {
                {
                    arr_31 [i_8] [i_9] [(short)14] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) -7144086451636064721LL))))) == (((/* implicit */int) ((((((/* implicit */long long int) var_9)) | (var_1))) > (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_10] [i_10 + 2] [i_9] [i_8]))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_11 = 0; i_11 < 15; i_11 += 4) 
                    {
                        arr_36 [i_8] = ((/* implicit */short) var_5);
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1224879699)) ? (23095695U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)67)))))) ? (((/* implicit */unsigned long long int) min((0LL), (((/* implicit */long long int) ((((/* implicit */_Bool) 8178003111998931204LL)) || (((/* implicit */_Bool) 627502539881758258ULL)))))))) : (627502539881758258ULL)));
                        var_25 = ((/* implicit */unsigned int) (+((-(((/* implicit */int) arr_30 [i_10] [13ULL] [i_10 - 1]))))));
                    }
                    var_26 = ((/* implicit */short) (_Bool)1);
                }
            } 
        } 
    } 
    var_27 = (~(((/* implicit */int) (!(((/* implicit */_Bool) min((928251043243797854ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))))));
}
