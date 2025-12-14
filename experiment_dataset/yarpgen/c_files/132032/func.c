/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132032
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
    var_16 = ((/* implicit */unsigned long long int) var_10);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */int) (unsigned char)151)) | (((/* implicit */int) (_Bool)0))))))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 3) /* same iter space */
        {
            var_18 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */int) var_8)) & (var_6)))) ? (var_6) : (((((/* implicit */int) (short)28995)) >> (((760101309) - (760101302))))))) * (((((/* implicit */int) (unsigned short)12801)) & (((/* implicit */int) var_11))))));
            arr_7 [i_0] [i_1 - 1] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_2)) ? (((unsigned int) var_10)) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))), (((unsigned int) (unsigned char)144))));
        }
        for (unsigned short i_2 = 1; i_2 < 21; i_2 += 3) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned char) max(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3864586974U)) ? (((/* implicit */int) (unsigned char)151)) : (((/* implicit */int) (unsigned short)65510))))))), ((_Bool)1)));
            arr_10 [i_2 + 1] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */int) (unsigned char)5)) % (((/* implicit */int) (_Bool)1)))))) ? ((-(((((/* implicit */int) (unsigned char)49)) & (((/* implicit */int) (unsigned short)23802)))))) : (((/* implicit */int) ((var_13) <= (((/* implicit */unsigned int) 1698158874)))))));
            /* LoopSeq 1 */
            for (unsigned char i_3 = 0; i_3 < 22; i_3 += 4) 
            {
                var_20 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_10)) == (((/* implicit */int) var_7))))) != (((/* implicit */int) (_Bool)1))))) | (((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) var_7)))))));
                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)203)) * (0)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_13)))) : (min((-391547950350838045LL), (((/* implicit */long long int) (short)26732)))))) + (((/* implicit */long long int) ((/* implicit */int) ((var_4) < (((/* implicit */unsigned long long int) -11)))))))))));
                arr_13 [i_2] [i_2] [i_3] [i_3] = ((/* implicit */unsigned int) var_8);
            }
            var_22 += ((/* implicit */unsigned int) min((max(((unsigned short)51271), (((/* implicit */unsigned short) (_Bool)1)))), (((/* implicit */unsigned short) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-102))) * (3657918527U)))))));
            var_23 -= ((/* implicit */signed char) var_12);
        }
        for (long long int i_4 = 1; i_4 < 18; i_4 += 3) 
        {
            arr_16 [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)11955)) * (((/* implicit */int) (_Bool)1))));
            var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) (unsigned char)246))) >= (((/* implicit */int) var_0))));
        }
    }
    for (unsigned int i_5 = 3; i_5 < 11; i_5 += 1) 
    {
        var_25 = var_9;
        var_26 *= ((/* implicit */signed char) ((long long int) (_Bool)1));
        arr_19 [i_5] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) -968772718)) || (((/* implicit */_Bool) 12168461476933224763ULL)))) ? (((/* implicit */int) (signed char)125)) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)73)) > (((/* implicit */int) (unsigned short)10715)))))));
    }
}
