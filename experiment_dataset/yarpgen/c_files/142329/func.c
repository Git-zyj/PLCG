/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142329
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_11 += ((/* implicit */short) 5296946401772878131ULL);
        arr_3 [i_0] = arr_2 [(signed char)0];
        arr_4 [i_0] = ((/* implicit */signed char) min((((/* implicit */long long int) ((((((/* implicit */_Bool) 3103721271U)) ? (((/* implicit */int) (short)-27648)) : (-1))) + (((/* implicit */int) max(((signed char)114), (arr_1 [i_0]))))))), ((+(-3017483505714113839LL)))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_2 = 4; i_2 < 19; i_2 += 3) 
        {
            for (signed char i_3 = 3; i_3 < 17; i_3 += 4) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 1) 
                {
                    {
                        var_12 ^= ((/* implicit */short) ((((/* implicit */_Bool) 2147483647)) && (((/* implicit */_Bool) (short)18074))));
                        var_13 = ((/* implicit */signed char) (-(min((((/* implicit */unsigned long long int) (short)27647)), (4467570830351532032ULL)))));
                    }
                } 
            } 
        } 
        var_14 = ((/* implicit */int) max((1150951909369976691ULL), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (short)27647)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)18074))) >= (2646496717739414188ULL))))) : (((9223372036854775807LL) & (((/* implicit */long long int) ((/* implicit */int) (short)-27639))))))))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_5] [i_5] [i_5]))) & (arr_9 [i_5] [i_5])))), (min((((/* implicit */unsigned long long int) (short)-18945)), (max((1626968321043403750ULL), (((/* implicit */unsigned long long int) (short)18049))))))));
        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) && (((/* implicit */_Bool) (short)17562))))), ((~((-(arr_12 [(short)19] [i_5]))))))))));
    }
    var_17 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (min((((/* implicit */unsigned long long int) (unsigned short)14932)), (var_9))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2021363262)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)-31429)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) var_2)), (var_1))))))) : (((/* implicit */int) var_10))));
    var_18 = ((/* implicit */short) max((((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) - (2947874894U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)50622)))))))), (var_9)));
    var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 13979173243358019584ULL)) ? (-1608253103) : (((/* implicit */int) (signed char)-34)))))));
}
