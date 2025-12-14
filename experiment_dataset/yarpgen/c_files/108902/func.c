/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108902
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
    for (unsigned short i_0 = 4; i_0 < 22; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((arr_0 [i_0 - 4]) + (arr_0 [i_0 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_10))))));
        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((((int) arr_0 [i_0])) >= (((/* implicit */int) arr_1 [(_Bool)1])))) ? (((/* implicit */int) (((+(var_9))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_1 [i_0]))))))) : (939524096))))));
        var_16 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))))), ((~(arr_0 [i_0]))))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) -939524122)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4094))) : (var_9)))) ? (max((var_4), (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) == (var_9))))))) - (15782145448626493541ULL)))));
    }
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        var_17 = ((/* implicit */unsigned int) (((+(((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned long long int) -939524097)) : (var_14))))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? ((+(3265048430U))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_3 [i_1]), (arr_1 [i_1]))))))))));
        arr_5 [i_1] = ((/* implicit */unsigned short) var_1);
    }
    for (signed char i_2 = 2; i_2 < 15; i_2 += 1) 
    {
        var_18 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) (~(arr_8 [i_2])))) & (max((var_14), (((/* implicit */unsigned long long int) var_6)))))) ^ (((min((((/* implicit */unsigned long long int) var_3)), (arr_0 [i_2]))) | (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_9)) : (var_14)))))));
        var_19 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2 + 3]))) | (var_13))) * (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_12))))), (((signed char) 2U))))))));
        var_20 = ((/* implicit */unsigned long long int) var_6);
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_1 [i_2 + 3])) : (((/* implicit */int) arr_1 [i_2 + 1]))))) ? (((((/* implicit */unsigned long long int) ((long long int) arr_8 [12]))) * (var_13))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) % (var_11))) <= (((/* implicit */unsigned long long int) max((1029918865U), (((/* implicit */unsigned int) 1946998195))))))))))))));
    }
    for (int i_3 = 2; i_3 < 22; i_3 += 2) 
    {
        var_22 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_9 [i_3] [(unsigned char)21]))))) != (min((9886868938117546290ULL), (arr_10 [i_3] [i_3]))))))));
        arr_11 [i_3] = ((/* implicit */short) var_4);
        /* LoopSeq 2 */
        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 4) /* same iter space */
        {
            var_23 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) arr_13 [1] [i_4])), (var_8)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_13 [i_3] [i_3 + 1]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-15229)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0))))) ? (((var_11) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)15982))) / (var_3)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_3 - 2])) > (((/* implicit */int) arr_1 [i_3 + 1]))))))));
            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) >= (((/* implicit */int) var_7))))), (var_4)))) ? (((((((/* implicit */_Bool) var_14)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) var_0)))))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1)))))));
        }
        /* vectorizable */
        for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 4) /* same iter space */
        {
            var_25 = ((/* implicit */long long int) (+(((/* implicit */int) arr_14 [i_3 + 1]))));
            var_26 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_10))));
            /* LoopNest 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (unsigned int i_7 = 2; i_7 < 22; i_7 += 1) 
                {
                    {
                        var_27 = ((/* implicit */short) ((((/* implicit */int) var_7)) | (((/* implicit */int) var_5))));
                        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_19 [i_6] [i_3]) ? (((/* implicit */int) arr_16 [i_3] [2ULL])) : (((/* implicit */int) var_10))))) ? (arr_10 [i_3 + 1] [i_3 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                    }
                } 
            } 
        }
    }
    var_29 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */int) var_8)) | (((/* implicit */int) var_5)))));
    var_30 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (var_14) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) var_12)))))) * (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_13)))))));
}
