/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104724
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
    var_10 = ((/* implicit */short) (!(((/* implicit */_Bool) var_9))));
    var_11 &= ((/* implicit */short) var_2);
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 4; i_1 < 20; i_1 += 3) 
        {
            {
                arr_4 [i_0 - 1] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
                /* LoopNest 2 */
                for (signed char i_2 = 4; i_2 < 20; i_2 += 2) 
                {
                    for (int i_3 = 1; i_3 < 20; i_3 += 2) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 1578667872)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)31))) : (127U))) * (((/* implicit */unsigned int) max((((/* implicit */int) var_1)), (-1578667873))))))) ? (((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) -7348604578037973515LL)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? ((~(((/* implicit */int) (unsigned char)239)))) : ((~(((/* implicit */int) var_3))))))));
                            var_13 &= ((/* implicit */unsigned int) max((((((((/* implicit */_Bool) 7348604578037973510LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3))) : (7664740670684626738ULL))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)16383)) ? (7348604578037973510LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4231)))))))), (((/* implicit */unsigned long long int) 8589934591LL))));
                        }
                    } 
                } 
                arr_9 [i_0] [i_0 - 3] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U))))), ((-(((/* implicit */int) (unsigned char)100))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)135)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (15428629429577204768ULL)));
    /* LoopSeq 2 */
    for (int i_4 = 3; i_4 < 14; i_4 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 3) /* same iter space */
        {
            arr_15 [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 15))));
            /* LoopNest 2 */
            for (signed char i_6 = 0; i_6 < 15; i_6 += 2) 
            {
                for (signed char i_7 = 3; i_7 < 11; i_7 += 4) 
                {
                    {
                        var_15 += ((/* implicit */unsigned short) var_0);
                        var_16 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)255))));
                        var_17 = ((/* implicit */unsigned long long int) min((min((2251799813685247LL), (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)252)) ? (-1) : (((/* implicit */int) var_7)))))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 3) /* same iter space */
        {
            var_18 = ((/* implicit */int) (~(((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-14))))) ? (((((/* implicit */_Bool) 1705396623790315890ULL)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-9))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
            var_19 ^= ((/* implicit */short) (+(max((((/* implicit */long long int) (signed char)-1)), (-3692206148110002600LL)))));
            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) var_7))));
            /* LoopNest 2 */
            for (unsigned char i_9 = 0; i_9 < 15; i_9 += 4) 
            {
                for (unsigned long long int i_10 = 2; i_10 < 13; i_10 += 2) 
                {
                    {
                        var_21 -= ((/* implicit */unsigned short) var_2);
                        var_22 = ((/* implicit */unsigned long long int) max((var_22), (min((6173627607843763629ULL), (((/* implicit */unsigned long long int) max((-1207652340), (((/* implicit */int) (short)32767)))))))));
                        var_23 = ((/* implicit */_Bool) (-(4880410628771274937LL)));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 15; i_11 += 3) 
                        {
                            var_24 -= ((/* implicit */unsigned char) (-(1265350510)));
                            var_25 = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
                            arr_33 [i_4] [i_4] [i_9] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 5806658827115247247LL)) ? (((/* implicit */int) (signed char)81)) : (((/* implicit */int) var_4))));
                        }
                    }
                } 
            } 
        }
        var_26 = ((/* implicit */int) min((max((1972444370U), (((/* implicit */unsigned int) -333317024)))), (((/* implicit */unsigned int) (unsigned short)43991))));
        /* LoopSeq 3 */
        for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 3) 
        {
            var_27 = (+(((/* implicit */int) (unsigned short)21559)));
            var_28 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)43977)) : (1961366863)))));
        }
        for (unsigned char i_13 = 0; i_13 < 15; i_13 += 2) 
        {
            var_29 = ((/* implicit */int) min((((/* implicit */unsigned int) 313836524)), (2277770419U)));
            var_30 = ((/* implicit */long long int) ((int) max((var_9), (1426749947))));
            var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */_Bool) 1961366854)) ? (((/* implicit */unsigned long long int) -333317024)) : (6597317219584792505ULL)))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((-7933835956955979321LL), (((/* implicit */long long int) 2016357852))))))))));
            var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) -1626625801520665935LL))));
        }
        for (unsigned long long int i_14 = 4; i_14 < 14; i_14 += 4) 
        {
            var_33 *= ((/* implicit */short) 1961366863);
            var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) (((!(((/* implicit */_Bool) 1023U)))) ? ((+(-1890224))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)43))))))))));
            var_35 = ((/* implicit */int) (unsigned short)18545);
        }
    }
    for (unsigned int i_15 = 0; i_15 < 11; i_15 += 2) 
    {
        var_36 = ((/* implicit */short) ((int) (!(((/* implicit */_Bool) var_7)))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_16 = 0; i_16 < 11; i_16 += 3) 
        {
            var_37 ^= ((/* implicit */unsigned int) var_9);
            arr_46 [i_15] [i_16] = ((/* implicit */signed char) 8453146938832789381LL);
            var_38 = ((/* implicit */int) (((~(-8453146938832789379LL))) ^ (2251799813685247LL)));
            var_39 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_1))));
            var_40 = ((/* implicit */_Bool) (short)17658);
        }
        arr_47 [i_15] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)255)), (var_6)))) ? (143698131) : ((+(((/* implicit */int) var_5))))));
        var_41 -= ((/* implicit */signed char) min((((/* implicit */int) max((var_7), (((/* implicit */signed char) var_5))))), ((~(((/* implicit */int) (_Bool)1))))));
    }
}
