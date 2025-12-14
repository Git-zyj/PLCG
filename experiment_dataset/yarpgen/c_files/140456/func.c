/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140456
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_5 [i_1] [i_0] = ((unsigned int) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : (var_4))), (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) * (((/* implicit */int) arr_2 [i_0])))))));
                var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 2987260335U)) ? (((/* implicit */int) arr_3 [i_0] [9ULL])) : (((/* implicit */int) (short)0))))))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (short)20)) : (472231105))) : ((~((+(((/* implicit */int) var_9))))))));
                var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 380333759)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (short)0))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) var_5);
    /* LoopSeq 3 */
    for (unsigned char i_2 = 1; i_2 < 16; i_2 += 2) 
    {
        var_15 = ((/* implicit */unsigned char) (short)0);
        /* LoopSeq 4 */
        for (short i_3 = 2; i_3 < 15; i_3 += 1) 
        {
            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-5))))) < (((/* implicit */int) ((((/* implicit */int) (short)-32005)) != (((/* implicit */int) (signed char)15))))))))) : ((-(((((/* implicit */_Bool) arr_9 [i_3] [i_2 + 1] [i_2])) ? (3846208968870193470LL) : (((/* implicit */long long int) arr_4 [i_2] [i_2]))))))));
            var_17 = ((/* implicit */short) ((((/* implicit */int) arr_7 [i_2])) & (((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) arr_1 [(signed char)0] [i_2])) ? (((/* implicit */int) arr_0 [i_2 + 2] [i_3])) : (((/* implicit */int) (short)0)))) : (((/* implicit */int) ((_Bool) arr_4 [i_2] [i_2 + 1])))))));
        }
        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 2) 
        {
            var_18 = ((/* implicit */short) ((long long int) (unsigned short)4461));
            arr_14 [i_2] [i_4] [i_4] = ((/* implicit */unsigned int) arr_2 [i_2]);
            arr_15 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)61074)) ? (arr_10 [i_2 - 1] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)187)), ((unsigned short)4461)))) : (((((((/* implicit */int) var_3)) + (2147483647))) << (((arr_10 [i_2 + 2] [i_2 - 1]) - (1330884411254571688ULL)))))));
            arr_16 [i_2] [i_2] = ((/* implicit */_Bool) (((~(((/* implicit */int) (short)0)))) | (((/* implicit */int) (signed char)0))));
            var_19 = ((/* implicit */_Bool) min((((unsigned long long int) arr_10 [i_2 + 1] [i_2])), (((0ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2)))))));
        }
        for (short i_5 = 0; i_5 < 18; i_5 += 4) /* same iter space */
        {
            var_20 = ((/* implicit */short) (-(arr_18 [i_2] [i_2])));
            arr_21 [i_2] = ((/* implicit */_Bool) min((min((arr_6 [i_2 + 2]), (arr_6 [i_2 + 2]))), (((((/* implicit */_Bool) arr_6 [i_2 + 2])) ? (arr_6 [i_2 + 2]) : (arr_6 [i_2 - 1])))));
            arr_22 [i_2] [i_5] = ((/* implicit */short) max((((((((/* implicit */int) (short)-5)) < (((/* implicit */int) (short)0)))) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)4)))) : ((+(((/* implicit */int) (unsigned char)66)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)17)) : (((/* implicit */int) (unsigned short)4461))))) ? (((((/* implicit */_Bool) (unsigned char)69)) ? (((/* implicit */int) (unsigned short)4487)) : (((/* implicit */int) (unsigned short)4461)))) : (((((/* implicit */_Bool) (unsigned short)4461)) ? (((/* implicit */int) arr_9 [i_5] [i_5] [(unsigned char)13])) : (((/* implicit */int) (unsigned short)61074))))))));
        }
        for (short i_6 = 0; i_6 < 18; i_6 += 4) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10))) : (9141664156548473521ULL)));
            var_22 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)0)) && (((/* implicit */_Bool) (short)-11)))))) : (((arr_10 [i_2 - 1] [i_2 - 1]) & (((/* implicit */unsigned long long int) var_0))))));
        }
        var_23 = ((/* implicit */signed char) (_Bool)1);
    }
    for (long long int i_7 = 1; i_7 < 23; i_7 += 1) 
    {
        var_24 = ((/* implicit */short) max(((unsigned short)61048), (((/* implicit */unsigned short) (short)0))));
        arr_30 [i_7] [i_7] = ((/* implicit */unsigned short) var_6);
        var_25 = ((/* implicit */signed char) (~(var_0)));
        arr_31 [i_7] = var_8;
    }
    for (signed char i_8 = 0; i_8 < 11; i_8 += 1) 
    {
        arr_34 [i_8] [(unsigned short)1] = ((/* implicit */unsigned int) max((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */_Bool) var_9)) ? (arr_29 [(unsigned short)11]) : (((/* implicit */long long int) arr_18 [i_8] [i_8]))))));
        var_26 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_18 [i_8] [i_8])) ? (arr_18 [i_8] [i_8]) : (arr_18 [i_8] [i_8])))));
        var_27 = ((/* implicit */short) ((arr_18 [i_8] [12U]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_8] [i_8])))));
    }
    var_28 = ((/* implicit */short) (unsigned short)4461);
}
