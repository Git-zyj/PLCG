/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174224
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
    for (short i_0 = 0; i_0 < 23; i_0 += 2) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)48775)) ? (((((/* implicit */_Bool) (unsigned short)32497)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : ((((_Bool)1) ? (((/* implicit */int) (unsigned short)5323)) : (((/* implicit */int) (unsigned short)9079))))));
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-6986)) < (((/* implicit */int) (_Bool)1))));
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)24387)) ? (((/* implicit */int) (unsigned short)47476)) : (((/* implicit */int) (unsigned short)26948))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 22; i_2 += 4) 
            {
                for (short i_3 = 1; i_3 < 22; i_3 += 4) 
                {
                    {
                        arr_13 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)47471)) ? (((/* implicit */int) (unsigned short)47476)) : (((/* implicit */int) (unsigned short)38587))));
                        var_15 += (unsigned short)7;
                    }
                } 
            } 
        } 
    }
    for (short i_4 = 0; i_4 < 23; i_4 += 2) /* same iter space */
    {
        arr_18 [i_4] [i_4] = ((/* implicit */long long int) (~((+(((/* implicit */int) (_Bool)1))))));
        /* LoopSeq 2 */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
        {
            var_16 = ((((/* implicit */_Bool) ((8562716692975281977LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)45)))))) ? ((((_Bool)1) ? (min((((/* implicit */int) (unsigned short)10057)), (-34996485))) : (((/* implicit */int) (unsigned short)63783)))) : (((((-1509004283) < (((/* implicit */int) (unsigned short)48775)))) ? (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) : (((/* implicit */int) max(((unsigned short)38599), (((/* implicit */unsigned short) (_Bool)1))))))));
            var_17 = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1))));
        }
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
        {
            var_18 = ((/* implicit */long long int) (~(((/* implicit */int) ((signed char) (~(((/* implicit */int) (short)-15861))))))));
            arr_26 [i_4] [i_4] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)(-127 - 1))) * (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) -1188314750)) ? (((/* implicit */int) (unsigned short)23521)) : (((/* implicit */int) (unsigned short)28207)))) : (((((/* implicit */int) (short)-27171)) / (((/* implicit */int) (_Bool)1))))));
            arr_27 [i_6] = ((/* implicit */short) min(((~(((/* implicit */int) (unsigned short)63354)))), ((-(((/* implicit */int) (_Bool)1))))));
            /* LoopSeq 1 */
            for (signed char i_7 = 1; i_7 < 21; i_7 += 4) 
            {
                var_19 = ((/* implicit */int) ((((/* implicit */long long int) min((((((/* implicit */int) (unsigned short)65535)) * (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))) == ((-(8763739509181507076LL)))));
                arr_30 [i_6] [i_6] = ((/* implicit */signed char) (short)-7976);
                /* LoopNest 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 4) 
                    {
                        {
                            arr_37 [i_4] [i_4] [i_4] [i_4] [i_6] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((int) max((((/* implicit */signed char) (_Bool)0)), ((signed char)-49)))) < ((~(-743404020)))));
                            var_20 = ((/* implicit */unsigned short) min(((!(((/* implicit */_Bool) min((-8562716692975281977LL), (((/* implicit */long long int) (unsigned short)17137))))))), (((12613637168632158807ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28303)))))));
                            arr_38 [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)28302)) ? (3174497821340721319ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42452)))));
                        }
                    } 
                } 
                arr_39 [i_6] [i_6] [i_7] = ((/* implicit */unsigned short) max((8562716692975281975LL), (((/* implicit */long long int) ((((/* implicit */int) (short)-1)) / (469762048))))));
            }
        }
        var_21 = ((/* implicit */short) (~(((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)1))))) + (((unsigned long long int) (unsigned short)15360))))));
        arr_40 [13] = min((((/* implicit */int) min((((/* implicit */short) ((signed char) (unsigned short)18059))), ((short)-28303)))), (max((((/* implicit */int) ((((/* implicit */int) (short)26867)) >= (((/* implicit */int) (signed char)-33))))), (max((702544438), (-702544438))))));
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) min(((~(((/* implicit */int) (unsigned short)4619)))), (((/* implicit */int) ((_Bool) (unsigned short)31934)))))) ? ((~(((/* implicit */int) (short)20812)))) : (((int) (short)32766))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_10 = 3; i_10 < 11; i_10 += 4) 
    {
        var_23 |= ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned short)52178))));
        var_24 = ((/* implicit */short) max((var_24), ((short)32756)));
        /* LoopSeq 3 */
        for (signed char i_11 = 0; i_11 < 14; i_11 += 4) 
        {
            arr_47 [i_10] = ((/* implicit */unsigned short) ((-1893291155) >= (((/* implicit */int) (unsigned short)2047))));
            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1107136603)) ? (((/* implicit */int) (unsigned short)54803)) : (((((/* implicit */_Bool) (unsigned short)5598)) ? (-1260367243) : (((/* implicit */int) (short)(-32767 - 1)))))));
            arr_48 [i_10] [i_11] = (+(1965684131));
        }
        for (int i_12 = 0; i_12 < 14; i_12 += 4) /* same iter space */
        {
            var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) (short)13606))));
            var_27 = ((/* implicit */int) (signed char)127);
        }
        for (int i_13 = 0; i_13 < 14; i_13 += 4) /* same iter space */
        {
            arr_54 [i_10] [i_13] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2))) : (((((/* implicit */_Bool) 873426641)) ? (4856757458885383850ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32765)))))));
            arr_55 [i_10] = ((/* implicit */long long int) (short)-28290);
            var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-24643)) < (((/* implicit */int) (short)19384))));
            var_29 = ((/* implicit */_Bool) ((short) (signed char)(-127 - 1)));
            var_30 = ((/* implicit */unsigned short) (+(16884701240740817967ULL)));
        }
    }
}
