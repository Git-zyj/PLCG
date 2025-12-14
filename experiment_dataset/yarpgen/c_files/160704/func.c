/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160704
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
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (13412618347769065535ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 622290590)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (signed char)127)))))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (signed char)127))));
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned long long int) 622290567);
        }
        for (signed char i_2 = 1; i_2 < 9; i_2 += 1) 
        {
            arr_11 [i_0] [i_0] = ((/* implicit */unsigned long long int) (signed char)(-127 - 1));
            var_20 = ((/* implicit */signed char) 622290588);
            arr_12 [i_2] [i_0] [i_0] = (unsigned short)10601;
            var_21 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */int) (signed char)123)) : (((/* implicit */int) (signed char)127))))) : (5034125725940486081ULL)));
            arr_13 [i_0] [(unsigned char)8] [(unsigned char)8] = ((((/* implicit */_Bool) -2)) ? (((((/* implicit */_Bool) (signed char)122)) ? (((/* implicit */unsigned long long int) 1162213986U)) : (5034125725940486071ULL))) : (((/* implicit */unsigned long long int) -622290590)));
        }
        for (unsigned int i_3 = 2; i_3 < 9; i_3 += 3) 
        {
            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) 1162213968U))));
            var_23 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10748))) : (4294967276U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)115)))));
            var_24 += ((/* implicit */unsigned char) (_Bool)1);
            var_25 = ((/* implicit */unsigned int) min((var_25), (9U)));
            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) 2286111865U))));
        }
        arr_17 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 839607670)) ? (1073709056U) : (((((/* implicit */_Bool) 5961675497887073740LL)) ? (1073709056U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10601)))))));
    }
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 21; i_4 += 1) 
    {
        arr_20 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) 851406229991734282ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)207)) ? (2397515489U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)122)))))) : (((((/* implicit */_Bool) 1766246528)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11))) : (18446744073709551609ULL)))));
        var_27 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (-1157230354) : (((/* implicit */int) (short)-32749))))) ? (883777399U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32752)))));
        var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 105553116266496ULL)) ? (((/* implicit */int) (short)32733)) : (((/* implicit */int) (unsigned short)10579))));
        arr_21 [i_4] = ((/* implicit */long long int) (_Bool)1);
    }
    var_29 = ((/* implicit */long long int) min((((((/* implicit */_Bool) max((0U), (((/* implicit */unsigned int) (signed char)-113))))) ? (((/* implicit */unsigned int) 1073741824)) : (((((/* implicit */_Bool) (short)-32762)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3380160385U))))), (((/* implicit */unsigned int) (_Bool)0))));
    var_30 = ((/* implicit */unsigned long long int) (unsigned short)10599);
    var_31 = (_Bool)1;
}
