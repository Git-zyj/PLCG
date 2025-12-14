/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116092
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned char) var_6);
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)46)) != (((/* implicit */int) var_7)))) ? (((/* implicit */int) max((((/* implicit */short) var_7)), (var_4)))) : (((/* implicit */int) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2] [i_1] [i_1] [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)202)))))))) : ((((~(((/* implicit */int) var_9)))) % (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) arr_3 [i_0] [i_1]))))))));
                    arr_6 [(signed char)2] |= ((/* implicit */unsigned char) ((unsigned short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) % (arr_5 [(unsigned short)0]))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)94))) > (arr_5 [(_Bool)1])))))));
                    var_13 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) var_9)), (((((((/* implicit */int) var_8)) + (2147483647))) >> (((arr_1 [2ULL]) - (13629151066987177786ULL)))))))) ? (((min((((/* implicit */unsigned long long int) var_6)), (arr_5 [(_Bool)1]))) >> (((min((var_3), (((/* implicit */unsigned long long int) (unsigned char)73)))) - (55ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(_Bool)1]))))))));
                    var_14 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) 2478587893U)) : (-424379015625264325LL))));
                }
            } 
        } 
        var_15 = (+(arr_1 [i_0]));
    }
    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (short i_4 = 3; i_4 < 19; i_4 += 2) 
        {
            for (unsigned short i_5 = 3; i_5 < 19; i_5 += 1) 
            {
                {
                    var_16 *= ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_6))) / (-8944116025730013519LL)))) ? (((/* implicit */int) arr_15 [i_3] [(_Bool)1])) : (((/* implicit */int) arr_12 [12ULL])))));
                    var_17 = ((/* implicit */unsigned char) ((arr_10 [i_4] [i_5] [i_4]) > (arr_10 [i_4] [i_4 + 1] [i_4])));
                }
            } 
        } 
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_6 = 0; i_6 < 21; i_6 += 3) 
        {
            var_18 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned char)69)))));
            var_19 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)55)) ? (((/* implicit */int) (short)30493)) : (((/* implicit */int) (unsigned short)9467))));
        }
        for (signed char i_7 = 1; i_7 < 19; i_7 += 3) 
        {
            var_20 &= ((/* implicit */unsigned short) var_8);
            var_21 &= ((/* implicit */unsigned char) min(((~(((((/* implicit */int) (signed char)28)) & (((/* implicit */int) (unsigned short)41794)))))), (((((/* implicit */_Bool) max((arr_14 [i_3] [16ULL]), (((/* implicit */short) arr_15 [i_3] [(_Bool)0]))))) ? (((((/* implicit */_Bool) arr_17 [i_3] [i_3])) ? (((/* implicit */int) arr_14 [i_3] [(unsigned short)20])) : (((/* implicit */int) (unsigned short)25740)))) : (((/* implicit */int) max((((/* implicit */unsigned char) var_9)), (var_10))))))));
        }
        for (unsigned short i_8 = 1; i_8 < 20; i_8 += 3) 
        {
            var_22 += ((/* implicit */signed char) (((-(((/* implicit */int) var_9)))) + (((/* implicit */int) max(((unsigned short)55782), (((/* implicit */unsigned short) (unsigned char)229)))))));
            var_23 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((unsigned char) (unsigned char)144))) && (((/* implicit */_Bool) var_1)))) ? (min((((/* implicit */unsigned int) var_9)), (((unsigned int) arr_19 [i_3])))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-112)))));
            var_24 = ((/* implicit */unsigned int) min((var_24), (var_0)));
        }
    }
    for (unsigned short i_9 = 0; i_9 < 22; i_9 += 4) 
    {
        var_25 |= ((unsigned long long int) (signed char)-35);
        arr_29 [i_9] [i_9] |= ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 8944116025730013518LL)))))) : ((-(6760978904108155027LL)))))) ? (min((((/* implicit */unsigned long long int) var_0)), (min((((/* implicit */unsigned long long int) arr_27 [i_9])), (var_2))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_28 [i_9]))))) == ((+(var_0))))))));
        var_26 += ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) arr_27 [i_9])), (max((((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned long long int) arr_25 [i_9]))))));
    }
    for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_11 = 0; i_11 < 20; i_11 += 1) 
        {
            var_27 = ((/* implicit */unsigned char) (short)-4923);
            var_28 = ((/* implicit */short) (unsigned char)142);
        }
        var_29 = ((/* implicit */signed char) arr_20 [i_10]);
    }
    var_30 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max((((/* implicit */unsigned char) ((((/* implicit */int) (signed char)116)) >= (((/* implicit */int) var_10))))), (var_10)))), (min((var_0), (((unsigned int) var_0))))));
    var_31 = var_1;
}
