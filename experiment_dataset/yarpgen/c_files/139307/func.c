/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139307
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 13; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = 9223372036854775807LL;
        var_16 = ((/* implicit */unsigned int) -9223372036854775807LL);
    }
    for (long long int i_1 = 2; i_1 < 13; i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_2 = 3; i_2 < 11; i_2 += 4) 
        {
            for (unsigned short i_3 = 1; i_3 < 13; i_3 += 2) 
            {
                for (int i_4 = 1; i_4 < 10; i_4 += 3) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned short i_5 = 1; i_5 < 13; i_5 += 2) 
                        {
                            var_17 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) ((short) 9223372036854775807LL))) ? (var_14) : (((/* implicit */int) arr_12 [i_1] [i_1 + 1] [i_1] [i_2 + 2])))));
                            var_18 &= ((/* implicit */unsigned int) min((((/* implicit */long long int) arr_5 [i_2])), (max((((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) -737888939)) : (30LL))), (((/* implicit */long long int) (_Bool)0))))));
                            var_19 = ((/* implicit */long long int) ((unsigned char) var_4));
                        }
                        for (unsigned short i_6 = 1; i_6 < 12; i_6 += 2) /* same iter space */
                        {
                            arr_22 [i_4 + 4] [i_4 + 4] [i_1] [i_2] [i_1 - 1] = ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -341040189351361282LL)) ? (((/* implicit */long long int) var_12)) : (var_9)))) ? (((/* implicit */int) ((4294967275U) >= (((/* implicit */unsigned int) 271507850))))) : (((/* implicit */int) ((unsigned char) -1847978007)))));
                            var_20 = ((/* implicit */int) arr_16 [i_1 - 1]);
                        }
                        for (unsigned short i_7 = 1; i_7 < 12; i_7 += 2) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned short) arr_24 [i_3 + 1] [i_3 + 1] [3U] [i_3] [i_3 - 1] [i_3]);
                            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)26428)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) 1984)))))));
                        }
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            arr_28 [i_1] [i_2] [i_3] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)180)) ? (7033729150053189781LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            arr_29 [i_1 - 2] [i_2 - 2] [i_2 - 2] [i_8] [(short)7] [i_1] = ((/* implicit */long long int) var_13);
                            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_1] [i_3])) ? (((int) (unsigned short)59526)) : (((/* implicit */int) (unsigned short)0))))) || (((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) 17545021797910583424ULL)) ? (9223372036854775798LL) : (((/* implicit */long long int) var_14))))))));
                            var_24 ^= ((((long long int) ((((/* implicit */long long int) var_11)) % (var_2)))) + (((/* implicit */long long int) ((/* implicit */int) (signed char)-109))));
                        }
                        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((arr_2 [i_1 - 1]) < (((/* implicit */unsigned int) ((/* implicit */int) (short)-12200))))) ? (arr_21 [i_4] [i_3] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48))))))));
                        var_26 = ((/* implicit */unsigned char) arr_7 [i_1]);
                    }
                } 
            } 
        } 
        arr_30 [i_1 - 2] [i_1] = ((/* implicit */unsigned int) var_5);
    }
    for (long long int i_9 = 1; i_9 < 11; i_9 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_10 = 1; i_10 < 10; i_10 += 1) 
        {
            for (int i_11 = 0; i_11 < 12; i_11 += 3) 
            {
                {
                    var_27 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_9 - 1] [i_10] [(unsigned short)5] [i_10] [(_Bool)1]))) ^ (((long long int) (short)-3026))));
                    arr_40 [i_10] [i_10] [1LL] [i_10] = (unsigned char)3;
                }
            } 
        } 
        var_28 = ((/* implicit */unsigned short) (_Bool)0);
        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)238))) : (max((((/* implicit */unsigned long long int) ((unsigned char) -9223372036854775805LL))), (max((var_8), (((/* implicit */unsigned long long int) (unsigned short)5421))))))));
    }
    for (int i_12 = 0; i_12 < 17; i_12 += 4) 
    {
        var_30 = ((/* implicit */int) arr_41 [i_12]);
        var_31 = ((/* implicit */unsigned int) var_14);
    }
    var_32 = var_1;
    var_33 = ((/* implicit */signed char) ((unsigned short) (signed char)-127));
}
