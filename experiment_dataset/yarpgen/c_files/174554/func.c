/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174554
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
    for (long long int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) 0ULL);
        var_12 = ((/* implicit */unsigned char) (signed char)(-127 - 1));
        var_13 |= ((/* implicit */signed char) -9);
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        arr_5 [(unsigned char)1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) -21)) ? (((long long int) (signed char)35)) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))));
        var_14 |= ((/* implicit */unsigned long long int) ((int) -2147483643));
        /* LoopNest 2 */
        for (long long int i_2 = 3; i_2 < 18; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 2) 
            {
                {
                    var_15 |= ((/* implicit */_Bool) 0U);
                    arr_12 [i_2] [i_2] [i_3] [i_3] = (_Bool)1;
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 1; i_4 < 18; i_4 += 2) 
                    {
                        for (signed char i_5 = 0; i_5 < 19; i_5 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)120)) ? (((/* implicit */long long int) 955646167U)) : (-8686075632553729597LL)))) ? (((((/* implicit */_Bool) (unsigned char)222)) ? (((/* implicit */int) (short)-2215)) : (((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) (unsigned char)140))));
                                arr_18 [i_2] [i_2] [i_3] [i_4 - 1] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 7679765921028687332LL)) ? (8) : (((/* implicit */int) (_Bool)0))));
                                var_17 += ((/* implicit */signed char) 0ULL);
                                var_18 |= ((/* implicit */_Bool) ((long long int) -5));
                            }
                        } 
                    } 
                    var_19 += ((/* implicit */unsigned long long int) ((unsigned char) (signed char)-64));
                    var_20 = ((/* implicit */unsigned char) ((unsigned int) (short)12028));
                }
            } 
        } 
        var_21 |= ((/* implicit */short) (((_Bool)1) ? (((int) (unsigned char)0)) : (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)44)) : (((/* implicit */int) (unsigned char)34))))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_22 = ((/* implicit */long long int) 2885260062U);
        /* LoopNest 3 */
        for (unsigned int i_7 = 0; i_7 < 12; i_7 += 2) 
        {
            for (short i_8 = 0; i_8 < 12; i_8 += 2) 
            {
                for (unsigned char i_9 = 0; i_9 < 12; i_9 += 2) 
                {
                    {
                        var_23 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) 0)) ? (((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)252))) : (0ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)228)) ? (0) : (20)))))));
                        arr_33 [i_6] = ((/* implicit */unsigned long long int) (short)1351);
                    }
                } 
            } 
        } 
        var_24 += ((((/* implicit */_Bool) 0LL)) ? (-4366447248964444488LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))));
    }
    for (unsigned char i_10 = 0; i_10 < 23; i_10 += 2) 
    {
        arr_37 [i_10] = ((/* implicit */signed char) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)214))) : (3LL)));
        arr_38 [1LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -122587606)) ? (((/* implicit */int) (unsigned char)42)) : (((int) ((int) -6465044206435860098LL)))));
        arr_39 [i_10] [i_10] = ((/* implicit */unsigned char) -316219370);
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_11 = 0; i_11 < 23; i_11 += 2) 
        {
            /* LoopNest 3 */
            for (long long int i_12 = 1; i_12 < 21; i_12 += 2) 
            {
                for (unsigned char i_13 = 3; i_13 < 21; i_13 += 2) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        {
                            arr_49 [i_10] [i_11] [i_13] [i_13] [(short)8] [i_14] = ((/* implicit */long long int) (unsigned char)29);
                            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((_Bool) 4366447248964444487LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 2233785415175766016LL)))) : (((unsigned long long int) (signed char)0)))))));
                            var_26 ^= ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */long long int) ((int) (-9223372036854775807LL - 1LL)))) : (((((/* implicit */_Bool) (unsigned char)222)) ? (-4366447248964444488LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)31)))))));
                        }
                    } 
                } 
            } 
            var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) ((short) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (1044706924584586427LL) : (-7067953982603331815LL)))))));
            var_28 = ((/* implicit */unsigned int) (unsigned char)8);
            arr_50 [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)41)) ? (((/* implicit */int) (short)-9132)) : (((/* implicit */int) (short)-31748))))) ? (((unsigned long long int) (_Bool)0)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0)))));
        }
        for (short i_15 = 3; i_15 < 19; i_15 += 2) 
        {
            arr_54 [i_10] [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4961069517752254289ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-19))) : (((long long int) (-9223372036854775807LL - 1LL)))));
            var_29 = ((unsigned char) 4709842498100896512LL);
        }
        for (unsigned long long int i_16 = 2; i_16 < 21; i_16 += 2) 
        {
            var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) 3931562670U)) : (((((/* implicit */_Bool) (signed char)126)) ? (10ULL) : (9223372036854775552ULL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3508838523U)) ? (941366906040543805LL) : (((/* implicit */long long int) -288026645))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)128))) : (((((/* implicit */_Bool) 18446744073709551607ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (17212445821012448978ULL))))) : (((/* implicit */unsigned long long int) ((unsigned int) (short)-18213)))));
            var_31 = ((((_Bool) 8843007085186954244ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)205))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)105)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))) : (18446744073709551605ULL)))) ? (18234899398038572971ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned char)224)))))));
        }
        var_32 = ((_Bool) ((long long int) ((((/* implicit */_Bool) -1941030344)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)172)))));
    }
    var_33 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)26)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-4366447248964444485LL)));
    var_34 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (-1569858821) : (((/* implicit */int) (short)32745))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (signed char)-31)))) : (((((/* implicit */_Bool) 3666378953861436042LL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)159))))))));
    var_35 = ((/* implicit */unsigned long long int) 2119019283U);
}
