/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145100
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
    for (unsigned long long int i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(33554176)))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)52766)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_6)))))) : (((((/* implicit */int) min((var_6), (((/* implicit */short) var_15))))) ^ (((/* implicit */int) (signed char)122))))));
        var_20 = ((/* implicit */signed char) min((((/* implicit */int) var_9)), (((((/* implicit */_Bool) (signed char)-117)) ? (((/* implicit */int) ((8855866467670880106LL) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)-110)))))) : (((/* implicit */int) var_12))))));
        arr_3 [i_0] = ((/* implicit */long long int) var_17);
    }
    for (short i_1 = 2; i_1 < 14; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            var_21 = ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) 8855866467670880106LL)) ? (-6056004901769391599LL) : (((/* implicit */long long int) -1348685858)))) ^ (((/* implicit */long long int) ((/* implicit */int) min((var_15), (((/* implicit */signed char) var_12)))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_1 + 1])) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_7 [i_1 - 2] [i_1 - 1])))))));
            arr_9 [i_2] [11LL] [9ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) -2147483624)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1016)) ? (((/* implicit */int) (unsigned short)29)) : (((/* implicit */int) (signed char)50)))))));
            var_22 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)-49)) ? (9592276319269525450ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)39))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 1973369180U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-2804))) : (0LL))) == (((/* implicit */long long int) ((unsigned int) (signed char)61)))))))));
        }
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)60642))) >= ((-9223372036854775807LL - 1LL))));
    }
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 11; i_3 += 3) 
    {
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 10982477224435508698ULL)) ? ((((_Bool)0) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) -2008309820)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (10982477224435508708ULL)));
        var_26 = ((/* implicit */long long int) ((unsigned char) arr_8 [i_3] [i_3]));
        arr_12 [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3] [(_Bool)0]))))))));
    }
    var_27 = ((/* implicit */unsigned int) (((((((_Bool)1) ? (((/* implicit */int) (unsigned short)16380)) : (((/* implicit */int) (signed char)-1)))) % (((((/* implicit */int) (unsigned short)12788)) + (((/* implicit */int) (unsigned short)15688)))))) > (((/* implicit */int) ((_Bool) (signed char)-17)))));
}
