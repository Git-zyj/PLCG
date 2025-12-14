/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158720
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
    var_12 &= ((/* implicit */long long int) min((((/* implicit */int) var_3)), (((((/* implicit */int) (short)-28307)) | (((/* implicit */int) (short)-28286))))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) (short)-28323))));
        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (short)-28310)) ? (((/* implicit */int) (short)-5402)) : (((/* implicit */int) (short)-28286)))), (((/* implicit */int) (short)28315)))))));
    }
    for (long long int i_1 = 0; i_1 < 16; i_1 += 2) /* same iter space */
    {
        var_15 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)28303)) && (((/* implicit */_Bool) (short)28273)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_1]))) : (arr_4 [i_1]))) > (((/* implicit */long long int) (-(((/* implicit */int) (short)-28282))))))))));
        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-33)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (11851080908612132213ULL))))));
    }
    for (long long int i_2 = 0; i_2 < 16; i_2 += 2) /* same iter space */
    {
        var_17 -= ((/* implicit */signed char) (_Bool)1);
        arr_10 [i_2] &= ((/* implicit */int) ((((((/* implicit */_Bool) -1035083911)) ? (((/* implicit */int) (signed char)-11)) : (((/* implicit */int) (unsigned short)42730)))) != ((~(((((/* implicit */_Bool) (signed char)17)) ? (((/* implicit */int) (signed char)-6)) : (-993468593)))))));
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (!(((/* implicit */_Bool) (-((-(((/* implicit */int) var_8))))))))))));
    }
    for (long long int i_3 = 0; i_3 < 16; i_3 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */long long int) min((var_19), (((long long int) arr_1 [i_3]))));
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */long long int) var_2)) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1035083900)) ? (((/* implicit */int) (short)28305)) : (((/* implicit */int) (_Bool)0))))) ? (-4513987135497265548LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3]))))))))));
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [i_3])) ? (arr_7 [i_3]) : (((/* implicit */unsigned long long int) arr_0 [i_3])))) < (((/* implicit */unsigned long long int) arr_0 [i_3]))))) < (((/* implicit */int) ((((long long int) 2991090426U)) != (((/* implicit */long long int) ((unsigned int) arr_12 [i_3])))))))))));
    }
    var_22 = ((/* implicit */int) max((var_22), (((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (((var_1) * (((/* implicit */int) var_4))))))) ? (1035083889) : (((((/* implicit */_Bool) max((var_6), (var_9)))) ? ((+(((/* implicit */int) var_9)))) : (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_8))))))))));
    var_23 += ((/* implicit */signed char) var_4);
}
