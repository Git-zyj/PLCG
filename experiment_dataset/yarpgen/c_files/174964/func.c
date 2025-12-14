/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174964
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
    var_18 -= ((/* implicit */unsigned char) var_12);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 17; i_0 += 1) /* same iter space */
    {
        var_19 ^= ((/* implicit */short) ((((/* implicit */int) arr_0 [i_0])) % ((~(((/* implicit */int) (unsigned char)5))))));
        arr_2 [i_0 + 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 227508917)) ? (((/* implicit */unsigned long long int) -765502251)) : (5486209248376169310ULL)));
    }
    for (unsigned int i_1 = 3; i_1 < 17; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned char i_2 = 2; i_2 < 17; i_2 += 2) 
        {
            var_20 = ((/* implicit */int) arr_7 [i_1]);
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) 
            {
                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) ? ((+(((/* implicit */int) (unsigned short)15994)))) : (((/* implicit */int) var_3)))))));
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((+(((/* implicit */int) var_2)))) % (((/* implicit */int) var_11))))) ? (((/* implicit */int) min(((unsigned char)203), (((/* implicit */unsigned char) ((signed char) (unsigned char)128)))))) : (((/* implicit */int) (!(((((/* implicit */int) (unsigned char)203)) >= (((/* implicit */int) (unsigned char)33)))))))));
            }
        }
        for (unsigned char i_4 = 2; i_4 < 16; i_4 += 4) 
        {
            arr_14 [i_4] &= ((/* implicit */short) (((!(((/* implicit */_Bool) (-(((/* implicit */int) var_13))))))) ? (((((/* implicit */_Bool) var_2)) ? (((var_1) ? (((/* implicit */long long int) arr_4 [i_4])) : (var_15))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned char)72)))))) : (((/* implicit */long long int) (+(((arr_13 [i_4] [i_4]) % (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))))));
            var_23 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_8 [i_4])))) : (32767ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 381191640U))))), (arr_13 [i_1] [i_4 + 2]))))));
            var_24 |= ((/* implicit */unsigned long long int) min((((((arr_8 [i_1 - 1]) - (((/* implicit */long long int) ((/* implicit */int) var_11))))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_8)) + (((/* implicit */int) var_9))))))))));
        }
        for (unsigned short i_5 = 2; i_5 < 17; i_5 += 2) 
        {
            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((11860832035336483232ULL) << (((/* implicit */int) (unsigned char)33))))) && ((!(((/* implicit */_Bool) 5797756012035586638ULL))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_6 = 1; i_6 < 15; i_6 += 2) 
            {
                var_26 = ((/* implicit */unsigned long long int) var_7);
                arr_20 [i_1] = ((/* implicit */short) max(((~(max((var_15), (((/* implicit */long long int) (unsigned char)255)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709518852ULL)) ? (((var_11) ? (((/* implicit */int) arr_17 [i_6] [i_6] [i_6 + 2] [i_6])) : (((/* implicit */int) (unsigned short)4906)))) : (((/* implicit */int) (unsigned char)216)))))));
                var_27 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)6275))));
                var_28 -= ((/* implicit */_Bool) 5797756012035586641ULL);
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                arr_23 [i_1] [i_1] [14U] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)50))))), (18446744073709518832ULL)));
                var_29 -= ((((/* implicit */int) ((((((/* implicit */_Bool) 1054288037)) || (((/* implicit */_Bool) (signed char)-1)))) || (((((/* implicit */_Bool) (unsigned char)203)) && (((/* implicit */_Bool) var_12))))))) != (((/* implicit */int) var_9)));
                var_30 += ((/* implicit */unsigned char) var_10);
                var_31 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */int) var_16)) >> (((var_12) - (1669974092U)))))))) ? ((-(11575411156376825968ULL))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 12860244319331863606ULL)) ? (((/* implicit */int) (unsigned char)87)) : (((/* implicit */int) (_Bool)1)))) >> (((/* implicit */int) var_17)))))));
            }
        }
        var_32 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-32316))));
    }
    var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_16) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) - (6212500016410018115ULL)))))) ? (((/* implicit */int) var_9)) : ((+(((/* implicit */int) var_11))))));
}
