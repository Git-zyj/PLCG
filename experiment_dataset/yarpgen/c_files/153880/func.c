/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153880
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
    var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) var_2))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */short) ((min((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)82))) ^ (var_3))), ((+(0ULL))))) * (((/* implicit */unsigned long long int) ((int) (-(((/* implicit */int) (unsigned short)53447))))))));
                    var_14 -= ((/* implicit */int) ((((/* implicit */int) max((((/* implicit */short) arr_4 [i_0] [i_0])), ((short)-16384)))) > (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))));
                    var_15 = ((/* implicit */short) max(((-(((/* implicit */int) arr_7 [i_1 - 1] [i_1] [i_2])))), (min((arr_3 [i_1 - 1] [(short)7]), (((/* implicit */int) arr_7 [i_1 + 1] [i_1 + 1] [5]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 15; i_3 += 4) 
                    {
                        for (int i_4 = 3; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_16 += ((max((arr_3 [i_4 - 2] [i_1 - 1]), (arr_8 [i_1 - 1] [i_3 - 2] [i_4 - 1] [i_4 - 2]))) == ((((~(((/* implicit */int) arr_7 [i_0] [i_2] [i_4])))) ^ (92171916))));
                                arr_14 [i_2] [(signed char)7] [i_4] [i_3] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((max((var_11), (9891854479610385555ULL))) >> ((((~(((/* implicit */int) (short)(-32767 - 1))))) - (32729)))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) : (var_11)));
                                var_17 = (+((+(min((arr_1 [i_3]), (-726200058))))));
                                arr_15 [i_2] [i_4] [i_2] = ((/* implicit */int) var_11);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) var_2))));
    /* LoopSeq 3 */
    for (int i_5 = 0; i_5 < 16; i_5 += 3) 
    {
        var_19 = ((((arr_3 [i_5] [i_5]) >= (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) max(((unsigned short)36527), (((/* implicit */unsigned short) (signed char)80))))) : ((-(((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)12)))))));
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((int) (_Bool)1)))));
        var_21 = ((/* implicit */_Bool) arr_4 [7] [i_5]);
    }
    for (int i_6 = 2; i_6 < 13; i_6 += 2) 
    {
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (~(min((-1), (((/* implicit */int) var_8)))))))));
        /* LoopSeq 4 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_22 [i_7] [10] [i_7] = ((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))), (((((/* implicit */unsigned long long int) var_0)) + (0ULL))))) / (max((((((/* implicit */_Bool) -16)) ? (arr_17 [i_7] [i_6 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6))))), (((/* implicit */unsigned long long int) (short)22812))))));
            arr_23 [i_6] [i_6] [i_7] = ((/* implicit */short) arr_19 [i_7]);
        }
        for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 1) /* same iter space */
        {
            var_23 = min((((/* implicit */int) (short)22817)), (min((min((var_10), (((/* implicit */int) (short)-6)))), (((/* implicit */int) (!((_Bool)1)))))));
            var_24 = ((/* implicit */short) 997139601);
            var_25 = ((/* implicit */signed char) (((_Bool)1) || (((/* implicit */_Bool) -1870026546))));
            var_26 = ((/* implicit */signed char) (~((~(((/* implicit */int) arr_9 [i_6] [i_6] [i_6] [i_6] [i_8]))))));
        }
        for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 1) /* same iter space */
        {
            var_27 = ((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_6] [i_6 + 1] [i_6 - 1] [i_9] [i_9]))))), (max((arr_16 [i_6 + 1]), (((/* implicit */int) ((_Bool) arr_28 [i_6] [i_9])))))));
            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? (((/* implicit */int) (signed char)-30)) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (short)8871)) : (arr_26 [i_9])))))), (((((/* implicit */_Bool) -1680017364)) ? (((/* implicit */unsigned long long int) var_10)) : (max((5197720569621451854ULL), (((/* implicit */unsigned long long int) arr_1 [(short)5])))))))))));
            arr_29 [i_6] [i_6] [i_9] = ((/* implicit */short) (!((_Bool)1)));
            arr_30 [i_6] [i_9] = ((/* implicit */short) (~(((/* implicit */int) (short)-22812))));
            /* LoopNest 2 */
            for (int i_10 = 3; i_10 < 11; i_10 += 1) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        var_29 = min((max((((/* implicit */int) (short)-15878)), (-1671445780))), (((((/* implicit */_Bool) max((((/* implicit */short) (signed char)38)), ((short)-22795)))) ? ((-(arr_24 [i_10] [i_9]))) : ((+(-326709477))))));
                        var_30 += ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_35 [i_11] [i_6] [i_10] [i_10]), (((/* implicit */int) var_9)))))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 1) /* same iter space */
        {
            var_31 = ((/* implicit */_Bool) var_9);
            var_32 = ((/* implicit */_Bool) (((!((_Bool)1))) ? (min((352220243), (((/* implicit */int) max((arr_28 [i_6] [i_6]), ((short)28780)))))) : (((((/* implicit */_Bool) max((-537050979), (((/* implicit */int) arr_0 [i_12] [i_6]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 9891854479610385577ULL)))))))));
        }
        arr_39 [i_6] [i_6] = min((1732931959), (min((min((-294485118), (((/* implicit */int) (short)-22812)))), (((/* implicit */int) (_Bool)1)))));
        arr_40 [i_6] [i_6] = ((/* implicit */unsigned short) (((((-(var_5))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)8191)) && (((/* implicit */_Bool) 677159590)))))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((9891854479610385556ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)22853), ((short)-3)))))))))));
    }
    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_14 = 0; i_14 < 23; i_14 += 1) 
        {
            var_33 = ((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) (+(arr_41 [i_13])))), (8554889594099166067ULL))) - (((((/* implicit */unsigned long long int) ((511) + (arr_45 [i_14] [i_13])))) + (18446744073709551606ULL)))));
            var_34 &= ((/* implicit */short) min(((~(((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) (short)13916))))));
        }
        var_35 = ((/* implicit */signed char) arr_41 [i_13]);
        var_36 = ((/* implicit */short) 27ULL);
    }
}
