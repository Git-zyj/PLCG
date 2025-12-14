/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118003
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
    var_10 = ((/* implicit */signed char) var_2);
    var_11 = ((/* implicit */_Bool) max((min((((18072705269184944018ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned long long int) -3532925865153061566LL)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 8319568472924706821ULL)) ? (18072705269184944018ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))))))));
    var_12 = ((/* implicit */_Bool) var_7);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_2 [i_0]), (arr_2 [i_0])))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65529))) <= (963424492U)))) : (((/* implicit */int) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))));
        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (unsigned short)65535))));
        var_15 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65529)) ? (7609640358402108880ULL) : (10127175600784844807ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned int) (signed char)-5))))))));
    }
    for (signed char i_1 = 0; i_1 < 16; i_1 += 1) /* same iter space */
    {
        arr_5 [2U] [i_1] = ((/* implicit */long long int) ((_Bool) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 374038804524607598ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (8319568472924706821ULL)))))));
        /* LoopSeq 2 */
        for (int i_2 = 2; i_2 < 15; i_2 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (long long int i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                arr_11 [i_1] [9ULL] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1] [i_2 - 2] [i_3])) ? (14574135921417341698ULL) : (((/* implicit */unsigned long long int) -2100377032))))) ? (arr_9 [i_1] [i_2 - 2] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_9 [i_3] [i_2] [(_Bool)1]) != (arr_9 [i_1] [i_2 - 1] [i_3])))))));
                arr_12 [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2 - 1] [i_2 + 1] [i_2 + 1])) ? (((/* implicit */int) min((((/* implicit */signed char) var_6)), (arr_3 [i_1])))) : (((/* implicit */int) (!(arr_7 [i_1] [i_1])))))))));
            }
            var_16 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)5559)) ? (((/* implicit */int) arr_3 [i_2 - 2])) : (((/* implicit */int) arr_3 [i_2 - 2]))))) ? ((~(((/* implicit */int) arr_2 [i_2 - 2])))) : (((((/* implicit */_Bool) arr_3 [i_2 + 1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)65535))))));
        }
        /* vectorizable */
        for (int i_4 = 2; i_4 < 15; i_4 += 3) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned char) ((arr_10 [i_1] [i_1] [i_1]) >= (arr_10 [i_1] [i_1] [i_1])));
            arr_15 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 5104931211750950907LL)) ? (((/* implicit */int) arr_14 [i_1] [i_1] [i_4])) : (((/* implicit */int) (unsigned char)15))));
        }
        arr_16 [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_7))) ? (((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (arr_4 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1] [i_1]))))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_1] [i_1])))))));
    }
    for (signed char i_5 = 0; i_5 < 16; i_5 += 1) /* same iter space */
    {
        arr_19 [i_5] [i_5] = ((/* implicit */unsigned char) min(((((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_5]))) : (arr_9 [i_5] [i_5] [i_5]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_3 [i_5])), ((unsigned char)21))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_5])) ? (((/* implicit */int) (unsigned char)247)) : (((/* implicit */int) arr_18 [i_5])))))));
        /* LoopSeq 2 */
        for (unsigned int i_6 = 2; i_6 < 14; i_6 += 4) 
        {
            arr_22 [i_5] = (!(((/* implicit */_Bool) 8319568472924706821ULL)));
            arr_23 [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_0 [i_6 + 1] [i_6 - 2])) ? (((/* implicit */int) arr_0 [i_6 + 1] [i_6])) : (((/* implicit */int) (_Bool)0)))) >> (((((/* implicit */_Bool) min((arr_21 [i_6 + 2]), (((/* implicit */unsigned char) (_Bool)1))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (short)0))))) : (((((/* implicit */long long int) ((/* implicit */int) var_4))) / (-5104931211750950907LL)))))));
            var_18 = ((/* implicit */unsigned char) arr_10 [i_6 - 1] [i_6 + 1] [i_6]);
            var_19 = ((/* implicit */signed char) (+(((/* implicit */int) arr_3 [i_5]))));
        }
        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
        {
            var_20 = ((_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_0))))) / (((unsigned long long int) 3872608152292209905ULL))));
            var_21 = ((/* implicit */_Bool) (~(((/* implicit */int) min(((_Bool)1), (((_Bool) arr_1 [i_7] [i_5])))))));
        }
    }
}
